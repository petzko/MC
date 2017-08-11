
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
	

#include "State.hpp"


#ifndef _UTILS_HPP_
#define _UTILS_HPP_





namespace MC{

	double scatter_checkerstates(AbstractState* init, AbstractState* fin,int& Nx, int& Ny);

	void print_board(int Nx, int Ny, AbstractState** states);

	template<typename T> 
		std::vector<T> draw_without_replacement(std::vector<T> from,int num_elems){

			assert(num_elems <= from.size());
			std::vector<T> result;
			srand(time(NULL)); 
			for(int i=0;i<num_elems;i++){
				int r = random()%from.size(); // random index
				T next_elem = from[r];
				from.erase(from.begin()+r); // takes interator! 
				result.push_back(next_elem); 
			}
			return result; 
		}


};

#endif


