//
// Created by jjl119 on 14/11/2020.
//

#include "Camera.hpp"


Camera::Camera( SDL_Renderer *_renderer, unsigned int width, unsigned int height) : renderer( _renderer ), HEIGHT(height), WIDTH(width)
{
}
void Camera::tick()
{
	constexpr unsigned int ISOMETRIC_RATIO = 2;
	constexpr unsigned int SPEED = 2;
	if ( this->tracking == nullptr )
	{
		if ( buttons_engaged[SDLK_w] )
		{
			y -= SPEED;
		}
		if ( buttons_engaged[SDLK_s] )
		{
			y += SPEED;
		}
		if ( buttons_engaged[SDLK_d] )
		{
			x += SPEED * ISOMETRIC_RATIO;
		}
		if ( buttons_engaged[SDLK_a] )
		{
			x-=SPEED * ISOMETRIC_RATIO;
		}
	}
	else{
		x = WIDTH / 2 + tracking->x;
		y = HEIGHT/ 2 + tracking->y;
	}
}

void Camera::RenderDrawLine(int x_start, int y_start, int x_end, int y_end){
	SDL_RenderDrawLine(renderer, x_start, y_start, x_end,y_end);
}
void Camera::RenderCopy( SDL_Texture *texture, SDL_Rect *src_rect,SDL_Rect *dest_rec){
	SDL_RenderCopy(renderer, texture, src_rect, dest_rec);
}
void Camera::keyboardHandler( const SDL_Event *const event)
{
	if(event->type==SDL_KEYDOWN){
		buttons_engaged[event->key.keysym.sym] = true;
	}
	else if(event->type==SDL_KEYUP){
		buttons_engaged[event->key.keysym.sym] = false;
	}
}
Camera::~Camera()
{
	SDL_DestroyRenderer( renderer );
}
