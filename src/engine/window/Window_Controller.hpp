//
// Created by jjl119 on 04/10/2020.
//

#ifndef GUARD_ISOMETRIC_WORLD_WINDOW_CONTROLLER_HPP
#define GUARD_ISOMETRIC_WORLD_WINDOW_CONTROLLER_HPP
#include "graphics/Interfaces.hpp"

class Window::Controller
{
public:
	Sprite_Interface *player = nullptr;
	bool keyboardEventHandler( const SDL_Event *const );
};

#endif // ISOMETRIC_WORLD_WINDOW_CONTROLLER_HPP
