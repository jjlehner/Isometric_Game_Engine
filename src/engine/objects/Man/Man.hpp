#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include <SDL_image.h>
#include <graphics/Interfaces.hpp>
class Man_Renderer;
class Man;

class Man_Renderer : public Renderer_Interface
{
private:
	const std::string TEXTURE_PATH = "../res/generic_man.png";

public:
	Man_Renderer( std::shared_ptr<Man> );
	virtual void render() const override;
};

class Man : public Sprite_Interface
{
public:
	virtual void render() const override;
	Man();
};

#endif // ISOMETRIC_WORLD_MAN_HPP
