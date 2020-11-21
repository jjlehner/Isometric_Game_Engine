//
// Created by jjl119 on 14/11/2020.
//

#include "Testing_Utilities.hpp"
#include <objects/Man/Man.hpp>
#include <scene/base_objects/Grid.hpp>

Scene* Testing_Utilities::getTestScene(SDL_Renderer* renderer, unsigned int window_width, unsigned int window_height)
{
	Scene *scene = new Scene(renderer,window_width, window_height);
	Grid grid( scene->camera, 100, 100 );
	Man man( scene->camera );
	grid.height_map[3][4] = 1;
	grid.height_map[3][6] = 1;
	grid.height_map[5][7] = 1;
	grid.height_map[5][6] = 1;

	scene->addSpriteToScene(&grid);
	scene->addSpriteToScene(&man);
	return scene;
}