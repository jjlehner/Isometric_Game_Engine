#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include "graphics/Textures.hpp"
#include <SDL_image.h>
#include <graphics/Interfaces.hpp>
class Man_Renderer;
class Man;

class Man : public Sprite_Interface
{
public:
	Man( std::shared_ptr<const Camera> );
	virtual bool keyboardEventHandler( const SDL_Event *const ) override;
};

class Man_Renderer : public Renderer_Interface
{
private:
	const int NUM_OF_POSITIONS = 64;
	const Man *const MAN;

public:
	Animated_Texture texture;

	Man_Renderer( std::shared_ptr<const Camera>, const Man *const man );
	const Man *const getSprite() const override;
	void render() const;
};

#endif // ISOMETRIC_WORLD_MAN_HPP
