#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include "graphics/Textures.hpp"
#include <SDL_image.h>
#include <graphics/Interfaces.hpp>
class Man_Renderer;
class Man;

class Man : public Sprite_Interface
{
private:
	enum class Facing_Direction{
		NONE, NORTH, NORTH_EAST, EAST, SOUTH_EAST, SOUTH, SOUTH_WEST, WEST, NORTH_WEST
	};
	bool running = false;

	Facing_Direction dir = Facing_Direction::EAST;
public:
	Man( std::shared_ptr<Camera> );
	virtual void tick() override;
	virtual ~Man();
};

class Man_Renderer : public Renderer_Interface
{
private:
	const int NUM_OF_POSITIONS = 64;
	const Man *const MAN;

public:
	Animated_Texture texture;

	Man_Renderer( std::shared_ptr<Camera>, const Man *const man );
	const Man *const getSprite() const override;
	void render() const override;
};

#endif // ISOMETRIC_WORLD_MAN_HPP
