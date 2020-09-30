#include "scene/base_objects/Grid.hpp"
#include "window/Window.hpp"
#include <chrono>
#include <iostream>
#include <thread>
using namespace std::chrono_literals;

int main()
{
	//Window w;
	Grid *grid = new Grid( 100, 100 );
	grid->height_map[4][5] = 1;
	grid->height_map[5][4] = 1;
	grid->height_map[5][6] = 1;
	grid->height_map[6][5] = 1;
	grid->height_map[5][5] = 2;
	grid->height_map[6][10] = 1;
	//grid.renderer->setCamera( w.getCamera() );

	/*while ( !w.closed )
	{
		// tick();
		// render();
		SDL_SetRenderDrawColor( w.getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );

		SDL_RenderClear( w.getCamera()->renderer );
		grid.render();
		SDL_RenderPresent( w.getCamera()->renderer );
	}*/
	delete grid;
	std::cout << "done" << std::endl;
}