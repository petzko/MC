#include <vector>
#include <time.h>
#include <stdlib.h>
#include <assert.h>
#include <iostream>


template<typename T> 
std::vector<T> draw_without_replacement(std::vector<T> from,int num_elems){
	
	assert(num_elems <= from.size());
	std::vector<T> result;
	srand(time(NULL)); 	
	for(int i=0;i<num_elems;i++){
		int r = random()%from.size(); // random index
		T next_elem = from[r];
		from.erase(from.begin()+r);
		result.push_back(next_elem); 
	}
	return result; 
}
	
