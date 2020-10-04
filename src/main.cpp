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
	w.setPlayer(&man);
	//grid.attribute->height_map[4][4] = 1;
	while ( !w.closed )
	{
		// tick();
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