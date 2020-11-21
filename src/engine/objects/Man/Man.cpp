//
// Created by jjl119 on 29/09/2020.
//

#include "Man.hpp"
#include <iostream>
#include <memory>
Man_Renderer::Man_Renderer( std::shared_ptr<Camera> camera, const Man *const man )
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

Man::Man( std::shared_ptr<Camera> camera )
{
	renderer = new Man_Renderer( camera, this );
}

void Man::tick()
{
	constexpr unsigned int ISOMETRIC_RATIO = 2;
	constexpr unsigned int SPEED = 2;
	if ( renderer->isCameraSet() )
	{
		if ( renderer->camera->buttons_engaged[SDLK_w] )
		{
			y -= SPEED;
		}
		if ( renderer->camera->buttons_engaged[SDLK_s] )
		{
			y += SPEED;
		}
		if ( renderer->camera->buttons_engaged[SDLK_d] )
		{
			x += SPEED * ISOMETRIC_RATIO;
		}
		if ( renderer->camera->buttons_engaged[SDLK_a] )
		{
			x-=SPEED * ISOMETRIC_RATIO;
		}
	}
}
Man::~Man()
{
}

Man::get