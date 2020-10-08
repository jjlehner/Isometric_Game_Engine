#include "scene/base_objects/Grid.hpp"
#include "window/Window.hpp"
#include <algorithm>
#include <iostream>
#include <objects/Man/Man.hpp>
#include <random>

using namespace std::chrono_literals;

Window w;

int main()
{

	Grid grid( w.getCamera(),100, 100 );
	Man man(w.getCamera());
	grid.height_map[3][4] = 1;
	grid.height_map[3][6] =-1;
	grid.height_map[5][7] = 2;
	grid.height_map[5][6] = 1;
	man.renderer->setCamera(w.getCamera());
	grid.renderer->setCamera( w.getCamera() );
	w.setPlayer(&man);
	//grid.attribute->height_map[4][4] = 1;
	while ( !w.closed )
	{
		w.tick();
		// render();
		SDL_SetRenderDrawColor( w.getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );

		SDL_RenderClear( w.getCamera()->renderer );
		grid.render();
		man.render();
		auto a = dynamic_cast<Man_Renderer*>(man.renderer);
		a->texture.setPosition((a->texture.getPosition() + 1)%8);
		SDL_RenderPresent( w.getCamera()->renderer );
		std::chrono::milliseconds sec(100);
		std::this_thread::sleep_for(std::chrono::duration_cast<std::chrono::milliseconds>(sec));
	}
	std::cout << "done" << std::endl;
}