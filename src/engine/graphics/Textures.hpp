#ifndef GUARD_ISOMETRIC_WORLD_TEXTURE_HPP
#define GUARD_ISOMETRIC_WORLD_TEXTURE_HPP

#include <string>
#include <window/Window.hpp>
class Texture
{
private:
	SDL_Texture *load_texture( std::string path );
protected:
	const std::string &PATH;
	const std::shared_ptr<const Camera> CAMERA;
public:
	Texture( const std::shared_ptr<const Camera> camera, const std::string path );
	virtual void render() const;
};

class AnimatedTexture : public Texture
{
private:
	const int WIDTH_OF_TILE, HEIGHT_OF_TILE;
	int NUM_OF_TILES;
	int loop_frequency = 0;
	unsigned int position = 0;

public:
	AnimatedTexture( std::shared_ptr<const Camera> camera, const std::string path, int width_of_tile, int height_of_tile );
	virtual void render() const override;
	bool setPosition( unsigned int position );
	unsigned int getPosition();
};

#endif // ISOMETRIC_WORLD_TEXTURE_HPP
