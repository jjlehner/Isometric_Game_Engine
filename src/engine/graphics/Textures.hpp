#ifndef GUARD_ISOMETRIC_WORLD_TEXTURE_HPP
#define GUARD_ISOMETRIC_WORLD_TEXTURE_HPP

#include "Interfaces.hpp"
#include <string>
#include <window/Window.hpp>
class Texture
{
private:
	bool load_texture();
protected:
	SDL_Texture * texture;
	int width, height;
	const std::string &PATH;
	const Renderer_Interface* const RENDERER;
	SDL_Rect src_rect;
	mutable SDL_Rect dest_rect;
public:
	Texture( const Renderer_Interface* const renderer, const std::string path );
	virtual void render() const = 0;
	virtual ~Texture();
};

class Animated_Texture : public Texture
{
private:
	const int WIDTH_OF_TILE, HEIGHT_OF_TILE;
	int NUM_OF_TILES;
	int loop_frequency = 0;
	unsigned int position = 0;
public:
	Animated_Texture( const Renderer_Interface* const renderer, const std::string path, int width_of_tile, int height_of_tile );
	virtual void render() const override;
	bool setPosition( unsigned int position );
	unsigned int getPosition();
	virtual ~Animated_Texture() = default;
};

#endif // ISOMETRIC_WORLD_TEXTURE_HPP
