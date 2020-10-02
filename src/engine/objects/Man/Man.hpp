#ifndef GUARD_ISOMETRIC_WORLD_MAN_HPP
#define GUARD_ISOMETRIC_WORLD_MAN_HPP

#include <SDL_image.h>
#include <graphics/Interfaces.hpp>
class Man_Renderer;
class Man;

class Man_Renderer : public Renderer_Interface
{
private:
	//NOTE - Should probably make textures their own separate class
	const std::string TEXTURE_PATH = "../res/generic_man.png";
	int position = 0;
	const int NUM_OF_POSITIONS = 64;
	const Man * const MAN;
public:
	Man_Renderer( const Man *const man );
	virtual void render() const override;
};

class Man : public Sprite_Interface
{
public:
	virtual void render() const override;
	Man();
};

#endif // ISOMETRIC_WORLD_MAN_HPP
