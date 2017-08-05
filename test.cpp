#include "test.hpp"
#include <iostream>


void print_vec(std::vector<double> v){
	
	for(int j=0;j<v.size();j++)
		std::cout<<j<<": "<<v[j] <<"\n"; 

}

int main(int argc, char** argv){

	std::vector<double> test_vec;
	for(int i = 0; i< 100;i++)
		test_vec.push_back(i*2.0);

//	std::cout<< "test_vec before \n";
//	print_vec(test_vec); 

	std::vector<double> rand_vec = draw_without_replacement<double>(test_vec,10);
	std::cout<<"random vec\n"; 
	print_vec(rand_vec); 
//	std::cout<<"test_vec after\n"; 
//	print_vec(test_vec); 

	return 0; 

}
