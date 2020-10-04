//
// Created by jjl119 on 29/09/2020.
//

#include "Man.hpp"
#include <iostream>
#include <memory>
Man_Renderer::Man_Renderer( std::shared_ptr<const Camera> camera, const Man *const man )
	: Renderer_Interface( camera ), MAN( man ), texture( this, "../res/generic_man.png", 138, 138 )
{
}

void Man_Renderer::render() const
{
	texture.render();
}

const Man *const Man_Renderer::getSprite() const
{
	return MAN;
}

Man::Man( std::shared_ptr<const Camera> camera )
{
	renderer = new Man_Renderer( camera, this );
}

bool Man::keyboardEventHandler( const SDL_Event *const event )
{
	switch ( event->key.keysym.sym )
	{
	case SDLK_UP:
		y -= 1;
		break;
	case SDLK_DOWN:
		y += 1;
		break;
	case SDLK_LEFT:
		x -= 2;
		break;
	case SDLK_RIGHT:
		x += 2;
		break;
	case SDLK_SPACE:
		x -= 200;
		break;
	}
	return true;
}