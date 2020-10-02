#ifndef GUARD_SPRITE_INTERFACE_HPP
#define GUARD_SPRITE_INTERFACE_HPP
#include "scene/base_objects/Game_Object_Interface.hpp"
#include "window/Window.hpp"
#include <SDL.h>
#include <memory>

class Renderer_Interface;
class Sprite_Interface;

class Renderer_Interface
{
protected:
	SDL_Texture *texture = nullptr;
	std::shared_ptr<Camera> camera = nullptr;
	SDL_Texture *load_texture( std::string path );

public:
	virtual void render() const = 0;
	Renderer_Interface() = default;
	void setCamera( std::shared_ptr<Camera> );
	virtual ~Renderer_Interface();
	bool isCameraSet();
};

class Sprite_Interface : public Game_Object_Interface
{
public:
	Renderer_Interface* renderer = nullptr;
	virtual void render() const;
	virtual ~Sprite_Interface();
};


#endif