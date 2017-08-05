#include <stdlib.h>
#include <time.h>

#ifndef _STATE_HPP_
#define _STATE_HPP_

namespace MC{

	class AbstractState{
		public:
			virtual void print_state() = 0;
			virtual void occupy_state(int id) = 0; 
			virtual void leave_state() = 0; 
			virtual bool is_occupied() = 0 ; //coulomb blockade? 	
	};


	class CheckersState: public AbstractState{

		private:
			/* These are the state variables; 
			 *
			 * x,y: current (x,y) coordinates; 
			 * Nx: number of squares in the X direction;
			 * Ny: number of squares in the Y direction;
			 *
			 */
			bool occupied; 
			int particle_id; 
		public:

			/* These are the state variables; 
			 *
			 * x,y: current (x,y) coordinates; 
			 * Nx: number of squares in the X direction;
			 * Ny: number of squares in the Y direction;
			 *
			 *
			 */
			int x,y,Nx,Ny;		 
			CheckersState(int x0, int y0, int Nx, int Ny);
			void print_state();
			void occupy_state(int id);
		
			void leave_state();
			bool is_occupied();
			int get_particle_id();
	};

	class Particle{
		private:
			// state variable
			AbstractState* state;
			// particle identificator;
			int id;
			bool nullstate;	
		public: 
			/** constructor **/
			Particle(AbstractState* init_state,int id);
			/** destructor **/
			~Particle();
			/** scatter function **/ 
			bool scatter(AbstractState* out_state, double (*scatterer)(AbstractState* instate, AbstractState* outstate));
	};

};
#endif
