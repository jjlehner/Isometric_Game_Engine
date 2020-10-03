#include "scene/base_objects/Grid.hpp"
#include "window/Window.hpp"
#include <algorithm>
#include <iostream>
#include <objects/Man/Man.hpp>
#include <random>
using namespace std::chrono_literals;

int main()
{

	Window w;
	Grid grid( w.getCamera(),100, 100 );
	Man man(w.getCamera());
	man.renderer->setCamera(w.getCamera());
	grid.renderer->setCamera( w.getCamera() );

	//grid.attribute->height_map[4][4] = 1;
	while ( !w.closed )
	{
		// tick();
		// render();
		SDL_SetRenderDrawColor( w.getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );

		SDL_RenderClear( w.getCamera()->renderer );
		grid.render();
		man.render();
		SDL_RenderPresent( w.getCamera()->renderer );
	}
	std::cout << "done" << std::endl;
}