#include "scene/base_objects/Grid.hpp"
#include "window/Window.hpp"
#include <iostream>
#include <random>
#include <algorithm>
using namespace std::chrono_literals;

int main()
{

	Window w;
	Grid grid( 100, 100 );
	std::random_device rd;  //Will be used to obtain a seed for the random number engine
	std::mt19937 gen(rd()); //Standard mersenne_twister_engine seeded with rd()
	std::uniform_int_distribution<int> uniform_dist_symm(-1,1);
	std::uniform_int_distribution<int> uniform_dist_asymm(0,1);

	grid.renderer->setCamera( w.getCamera() );

	//grid.attribute->height_map[4][4] = 1;
	while ( !w.closed )
	{
		// tick();
		// render();
		SDL_SetRenderDrawColor( w.getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );

		SDL_RenderClear( w.getCamera()->renderer );
		grid.render();
		SDL_RenderPresent( w.getCamera()->renderer );
	}
	std::cout << "done" << std::endl;
}