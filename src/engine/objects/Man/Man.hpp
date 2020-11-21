#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include "graphics/Interfaces.hpp"
#include "graphics/Textures.hpp"
#include <SDL_image.h>
#include <vector>
#include <concepts>
template <typename Renderer>
	requires std::derived_from<Renderer,Renderer_Interface>
class Man : public Sprite_Interface<Renderer>
{
private:
	enum class Facing_Direction{
		NONE, NORTH, NORTH_EAST, EAST, SOUTH_EAST, SOUTH, SOUTH_WEST, WEST, NORTH_WEST
	};
	Facing_Direction dir = Facing_Direction::EAST;
	bool running = false;

public:
	Man( Camera * camera );
	virtual void tick() override;
	virtual ~Man();
};

class Man_Renderer : public Renderer_Interface
{
private:
	enum class Actions{
		ATTACK, DIE, ROT, STAND_GROUND, WALK
	};

    static std::vector<Texture *> attacking;
    static std::vector<Texture *> dying;
    static std::vector<Texture *> rotting;
    static std::vector<Texture *> standing_ground;
    static std::vector<Texture *> walking;

public:

	Man_Renderer( Camera* camera );
	void render() const override;
};

#endif // ISOMETRIC_WORLD_MAN_HPP
