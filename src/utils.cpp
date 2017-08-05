#include "utils.hpp"
#include <iostream>
#include <math.h>
#include <stdio.h>

#define ABS(X) (X>=0? X:-X)
#define DIAGONAL (false) 

void MC::print_board(int Nx, int Ny, MC::AbstractState** states){
	
	// max num digits is 
	int num_digits = int(ceil(log10((double)Nx*Ny)));
	std::cout<< "max num_digits= "<<num_digits << "\n";


	/* print the upper row*/ 
	for(int n = 0; n<Nx;n++){
		std::cout<<"__";
		for(int k=0;k<num_digits;k++){
			std::cout<<"_";
		}
		std::cout<<"_  ";
	}
	std::cout<<"\n";

	for (int n=0; n<Nx;n++){
		for (int m=0; m< Ny; m++){
			std::cout<<"|_";
			MC::CheckersState* state = (MC::CheckersState*) states[m+n*Ny];
			int particle_id = state->get_particle_id();
			int start_from = 0;
			if (particle_id >=0){
				start_from =  int(ceil(log10(particle_id+1)));
				std::cout<<particle_id;
			}
			for (int k=start_from;k<num_digits;k++) {std::cout<<"_";}		    

			std::cout <<"_| ";
		}
		std::cout<<"\n";

	}

}



double MC::scatter_checkerstates(MC::AbstractState* instate_a, MC::AbstractState* finstate_a){	


	MC::CheckersState* instate = (MC::CheckersState*) instate_a; 
	MC::CheckersState* finstate = (MC::CheckersState*) finstate_a;
	//std::cout << "init scatter state: (" << instate->x << ";"<<instate->y <<")\n";
	//std::cout << "fin scatter state: (" << finstate->x << ";"<<finstate->y <<")\n";
	
	// do not change anything ! 
	if (instate == finstate) { return 0.0;} 


	// can only go on un_occupied state! 
	if (finstate->is_occupied()){ return 0.0;}

	int ix = instate->x; 
	int iy = instate->y; 

	int fx = finstate->x; 
	int fy = finstate->y;
	int dx = ix-fx; 
	int dy = iy-fy; 

	// Keep in mind the principle of detailed balance! 
	if DIAGONAL{
		// allows diagonal transitions 
		// -_______________
		// |1/9 |1/9 |1/9 |
		// |____|____|____|
		// |1/9 |1/9 |1/9 |
		// |____|____|____|
		// |1/9 |1/9 |1/9 |
		// |____|____|____|
		//
		if (ABS(dx) <= 1 && ABS(dy) <= 1){
			return 1./9.;
		} 
	}else{	
		// does not allow diagonal transitions 
		// capture any kind of bias in the scattering mechanisms?
		// _______________
		// |0   |1/10| 0  |
		// |____|____|____|
		// |5/10|1/10|1/10|
		// |____|____|____|
		// |0   |1/10| 0  |
		// |____|____|____|
		

		if ((dy == -1) && dx==0) return 5/10;
		
		if(  (ABS(dx) ==1 && ABS(dy)==0) || 
				(ABS(dx)==0 && ABS(dy) == 1) ){
		       	return 1./10.; }

	}
	//std::cout<<"out of reach\n";
	return 0.0;
}
