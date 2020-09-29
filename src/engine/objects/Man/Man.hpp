#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include <graphics/Interfaces.hpp>
#include <SDL_image.h>
class Man;

class Man_Renderer : public Renderer_Interface{
protected:

public:
	Man_Renderer(std::shared_ptr<Man> );
	virtual void render() const override;
};

class Man : public Sprite_Interface
{
public:
	virtual void render() const override;
	Man();
};

#endif // ISOMETRIC_WORLD_MAN_HPP
