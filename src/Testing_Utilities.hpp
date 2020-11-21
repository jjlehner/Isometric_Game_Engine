//
// Created by jjl119 on 14/11/2020.
//

#ifndef GUARD_ISOMETRIC_WORLD_TESTING_UTILITIES_HPP
#define GUARD_ISOMETRIC_WORLD_TESTING_UTILITIES_HPP

#include <scene/Scene.hpp>
struct Testing_Utilities
{
	static Scene* getTestScene(SDL_Renderer* renderer, unsigned int window_width, unsigned int window_height);
};

#endif // ISOMETRIC_WORLD_TESTING_UTILITIES_HPP
