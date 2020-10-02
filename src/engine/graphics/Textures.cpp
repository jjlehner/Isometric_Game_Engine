//
// Created by jjl119 on 02/10/2020.
//

#include "Textures.hpp"
#include <string>
#include <SDL_image.h>
Texture::Texture(  const std::shared_ptr<const Camera> camera, const std::string path ) : CAMERA(camera), PATH(path)
{
}
AnimatedTexture::AnimatedTexture( const std::shared_ptr<const Camera> camera, const std::string path, int width, int height) : Texture(camera, path), WIDTH_OF_TILE(width), HEIGHT_OF_TILE(height){

}
SDL_Texture *Texture::load_texture( std::string path )
{
	if ( CAMERA->renderer == nullptr )
	{
		return nullptr;
	}
	// The final texture
	SDL_Texture *newTexture = NULL;

	// Load image at specified path
	SDL_Surface *loadedSurface = IMG_Load( path.c_str() );
	if ( loadedSurface == NULL )
	{
		printf( "Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError() );
	}
	else
	{
		// Create texture from surface pixels
		newTexture = SDL_CreateTextureFromSurface( CAMERA->renderer, loadedSurface );
		if ( newTexture == NULL )
		{
			printf( "Unable to create texture from %s! SDL Error: %s\n", path.c_str(), SDL_GetError() );
		}

		// Get rid of old loaded surface
		SDL_FreeSurface( loadedSurface );
	}

	return newTexture;
}
void AnimatedTexture::render() const{

}
bool AnimatedTexture::setPosition(unsigned int position){
	if(NUM_OF_TILES > position){
		this->position = position;
		return true;
	}
	return false;
}
unsigned int AnimatedTexture::getPosition(){
	return this->position;
}