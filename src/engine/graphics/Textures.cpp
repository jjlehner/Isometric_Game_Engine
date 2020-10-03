//
// Created by jjl119 on 02/10/2020.
//

#include "Textures.hpp"
#include <SDL_image.h>
#include <string>
Texture::Texture( const Renderer_Interface *const renderer, const std::string path )
	: RENDERER( renderer ), PATH( path )
{
	if ( load_texture() )
	{
		SDL_QueryTexture( texture, NULL, NULL, &width, &height );
		dest_rect.w = width;
		dest_rect.x = height;
	}

	src_rect.w = width;
	src_rect.h = height;
}
Animated_Texture::Animated_Texture( const Renderer_Interface *const renderer, const std::string path, int width,
								  int height )
	: Texture( renderer, path ), WIDTH_OF_TILE( width ), HEIGHT_OF_TILE( height )
{
	src_rect.w = WIDTH_OF_TILE;
	src_rect.h = HEIGHT_OF_TILE;
	dest_rect.w = WIDTH_OF_TILE;
	dest_rect.h = HEIGHT_OF_TILE;
}
bool Texture::load_texture()
{
	texture = nullptr;
	if ( RENDERER->camera->renderer == nullptr )
	{
		return false;
	}
	// Load image at specified path
	SDL_Surface *loadedSurface = IMG_Load( PATH.c_str() );
	if ( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", PATH.c_str(), IMG_GetError() );
	}
	else
	{
		// Create texture from surface pixels
		texture = SDL_CreateTextureFromSurface( RENDERER->camera->renderer, loadedSurface );
		if ( texture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", PATH.c_str(), SDL_GetError() );
			return false;
		}

		// Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}
	return true;
}
Texture::~Texture()
{
	if(texture != nullptr){
		SDL_DestroyTexture(texture);
	}
}
void Animated_Texture::render() const
{
	dest_rect.x = RENDERER->getSprite()->x;
	dest_rect.y = RENDERER->getSprite()->y;
	SDL_RenderCopy( RENDERER->camera->renderer, texture, &src_rect, &dest_rect );
}
bool Animated_Texture::setPosition( unsigned int position )
{
	if ( NUM_OF_TILES > position )
	{
		this->position = position;
		src_rect.x = WIDTH_OF_TILE * (int)( position % ( width / WIDTH_OF_TILE ) );
		src_rect.y = HEIGHT_OF_TILE * (int)( position / ( width / WIDTH_OF_TILE ) );
		return true;
	}
	return false;
}
unsigned int Animated_Texture::getPosition()
{
	return this->position;
}