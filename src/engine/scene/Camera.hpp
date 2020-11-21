//
// Created by jjl119 on 14/11/2020.
//

#ifndef GUARD_ISOMETRIC_WORLD_CAMERA_HPP
#define GUARD_ISOMETRIC_WORLD_CAMERA_HPP

#include <SDL_events.h>
#include <SDL_render.h>
#include <graphics/Interfaces.hpp>
#include <map>
class Camera
{
private:
	SDL_Renderer *renderer = nullptr;
public:
	int x = 0;
	int y = 0;
	int width = 0;
	int zoom = 1;

	const unsigned int WIDTH;
	const unsigned int HEIGHT;

	Sprite_Interface *tracking = nullptr;
	std::map<SDL_Keycode, bool> buttons_engaged;

	void keyboardHandler( const SDL_Event *const );
	Camera( SDL_Renderer * ,unsigned int WIDTH, unsigned int HEIGHT);

	~Camera();
	void RenderDrawLine(int x_start, int y_start, int x_end, int y_end);
	void RenderCopy( SDL_Texture *texture, SDL_Rect *src_rect,SDL_Rect *dest_rec);
	void tick();

};

#endif // ISOMETRIC_WORLD_CAMERA_HPP
