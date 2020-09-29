#ifndef GUARD_SPRITE_INTERFACE_HPP
#define GUARD_SPRITE_INTERFACE_HPP
#include <memory>
#include "Renderer_Interface.hpp"
class Sprite_Interface;
class Renderer_Interface;

class Sprite_Interface
{
public:
	virtual void render() = 0;

protected:
	std::unique_ptr<Renderer_Interface> renderer;
	Sprite_Interface( std::unique_ptr<Renderer_Interface> );
	virtual ~Sprite_Interface() = default;
};
class Renderer_Interface{
	virtual void render() const = 0;
	std::shared_ptr<Sprite_Interface> sprite;
	protected:
		Renderer_Interface(std::shared_ptr<Sprite_Interface> _sprite);
};
#endif