#include <iostream>
#include <stdlib.h> // malloc etc.. 

class abstract_parent{

	public:
		virtual void print_secret_num() = 0; 
};
class test_me:abstract_parent{

	private:
		int my_secret_num; 	
	public: 
		int my_num;
		test_me():my_num(1),my_secret_num(-1){}; // default constructor  
		test_me(int num):my_num(num),my_secret_num(-1){}; 
		virtual void print_secret_num(){std::cout<<"secret_num_is"<<my_secret_num;};
};


void foo(int a){
	std::cout<<"a= "<< a << "\n";
}

void bar(int a, void (*func)(int)){

	(*func)(a); 
}

int main(int argv, char ** argc){

	int N = 10; 
	double* petz = (double*) malloc(N*sizeof(double));


	for(int i = 0; i<N;i++){
		petz[i] = 10;
		std::cout<< *(petz+i) << "\n";
	}

	abstract_parent** pepe = (abstract_parent**) malloc(N*sizeof(abstract_parent*)); 
	for(int i=0;i<N;i++) *(pepe+i) = (abstract_parent*)new test_me(i); 
	for(int i=0;i<N;i++){
		std::cout<<"secretnum is: "; 
		pepe[i]->print_secret_num();
		std::cout << "\n"; 
	}	
	// alternatively 
	test_me* pepe2 = new test_me[N];

	for (int i=0;i<N;i++) std::cout<<pepe2[i].my_num << "\n";

	int c = 5;
	std::cout<<"CALLING BAR("<<c<<")"<<"\n";
	bar(c,&foo);	

}
