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
	std::shared_ptr<Sprite_Interface> sprite;
	std::shared_ptr<Camera> camera = nullptr;
	SDL_Texture* load_texture(std::string path);
public:
	virtual void render() const = 0;
	Renderer_Interface( std::shared_ptr<Sprite_Interface> );
	void setCamera( std::shared_ptr<Camera> );
};

class Sprite_Interface : public Game_Object_Interface
{
	Sprite_Interface() = delete;
protected:
	Sprite_Interface( std::unique_ptr<Renderer_Interface> );
	virtual ~Sprite_Interface() = default;

public:
	std::unique_ptr<Renderer_Interface> renderer;
	virtual void render() const = 0;
};
#endif