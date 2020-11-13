#ifndef GUARD_SPRITE_INTERFACE_HPP
#define GUARD_SPRITE_INTERFACE_HPP
#include "scene/base_objects/Game_Object_Interface.hpp"
#include "window/Window.hpp"
#include <SDL.h>
#include <memory>

class Renderer_Interface;
class Sprite_Interface;
class Camera;
class Renderer_Interface
{
public:
	std::shared_ptr<Camera> camera = nullptr;

	Renderer_Interface(std::shared_ptr<Camera> camera);
	virtual ~Renderer_Interface() = default;

	virtual void render() const = 0;

	void setCamera( std::shared_ptr<Camera> );
	bool isCameraSet();

	virtual const Sprite_Interface* const getSprite() const = 0;
};

class Sprite_Interface : public Game_Object_Interface
{
public:
	int x = 0;
	int y = 0;
	int z = 0;
	Renderer_Interface* renderer = nullptr;
	virtual void tick();
	void render() const;
	virtual ~Sprite_Interface();
	virtual bool keyboardEventHandler(const SDL_Event*const);
};


#endif