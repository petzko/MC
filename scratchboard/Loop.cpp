#include "Loop.hpp"
#include "State.hpp"
#include "utils.hpp"
#include <iostream>
#include <stdlib.h>
#include <random>

using namespace MC;


void main_loop(int Nx, int Ny, int num_particles){

	//initialize all possible states
	//
	int num_states = Nx*Ny;
	AbstractState** states_list = (AbstractState**) malloc(num_states*sizeof(AbstractState*));

	std::vector<int> state_coords; 

	for(int x=0;x<Nx;x++){
		for(int y=0;y<Ny;y++){
			states_list[y+x*Ny] =  new CheckersState(x,y,Nx,Ny);
			state_coords.push_back(y+x*Nx);
		}
	}

	// pick a random state and give it a particle -> draw without replacement! 
	std::vector<int> init_locations = draw_without_replacement<int>(state_coords,num_particles); 

	int p_id =  0; 
	Particle** particles = (Particle**) malloc(num_particles*sizeof(Particle*));	
	for(int loc:init_locations){ // c++ 11 loop 
		// the initial states of the particle! 
		particles[p_id]=new Particle(states_list[loc],p_id+1);
		// occupy the state now! 
		states_list[loc]->occupy_state(p_id+1);

		std::cout<<"creating particle on state "<<loc<< " with id="<<p_id +1 <<"\n";
		p_id++;
	}

	for(int s=0;s<Nx*Ny;s++){
		MC::CheckersState* state = (MC::CheckersState*)states_list[s];
	}


	int N_t = 100000;
        int num_events = 0;	
	srand(time(NULL)); 
	MC::print_board(Nx,Ny,states_list);
	for(int t=0; t<N_t; t++){
		// for each particle p 
		for(int p=0; p<num_particles;p++){
			// select a random state and scatter !! 

			std::random_device rd;
			std::mt19937 mt(rd());
			std::uniform_real_distribution<double> dist(0., num_states*1.0);

			int state_idx = int(floor(dist(mt)));
			bool scattered = particles[p]->scatter(states_list[state_idx],&scatter_checkerstates);	
			if(scattered){
			       	std::cout<<"scatter event occured at t=" <<t <<"\n";  
				MC::print_board(Nx,Ny,states_list);
				num_events++;
			}
	

		}
	}
	std::cout << "Num scatt events : " << num_events << "\n";	


	for(int p=0;p<num_particles;p++) {
		free(particles[p]);
	}
	free(particles);


	for(int s=0; s<Nx*Ny;s++){
		free(states_list[s]);
	}	
	free(states_list);

}
