#include "State.hpp"
#include <iostream>
#include <random>

MC::CheckersState::CheckersState(int x0,int y0, int nx, int ny){
	x = x0; 
	y = y0; 
	Nx = nx;
	Ny = ny;
	occupied = false;
	particle_id = -1;
}


bool MC::CheckersState::is_occupied(){return this->occupied;}

void MC::CheckersState::occupy_state(int id){
	this->occupied = true;	
	this->particle_id = id; 
}

int MC::CheckersState::get_particle_id(){return this->particle_id;}


void MC::CheckersState::leave_state(){
	this->occupied = false;
	this->particle_id = -1; 
}

void MC::CheckersState::print_state(){
	std::cout<< "x: "<< this-> x << "; y: "<<this->y << "\n";
}

MC::Particle::Particle(MC::AbstractState* init_state, int particle_id){

	this->id = particle_id; 	

	if (init_state != NULL)
	{
		this->state = init_state;
		this->state->occupy_state(this->id);
		this->nullstate = false; 
	}else{
		this->state = NULL; 
		this->nullstate = true;
	}
}

MC::Particle::~Particle(){;}

bool MC::Particle::scatter(MC::AbstractState* fin_state, double (*scatterer)(MC::AbstractState*,MC::AbstractState*)){		

	//scattering probability 
	double s_prob = (*scatterer)(this->state,fin_state);

	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_real_distribution<double> dist(.0, 1.0);

	double r = dist(mt);

	//draw a uniform random num from 0 to 1 over 1000 bins 	
	// make the transition! 
	if (r < s_prob){
		//leave-reassign-occupy
		state->leave_state(); 
		state = fin_state;
		state->occupy_state(this->id);
		return true; 
	}
	return false; 
}



