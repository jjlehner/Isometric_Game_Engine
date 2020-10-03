#include "Interfaces.hpp"
#include <SDL_image.h>
#include <memory>

Renderer_Interface::Renderer_Interface( std::shared_ptr<const Camera> _camera ): camera(_camera)
{

}

void Renderer_Interface::setCamera( std::shared_ptr<const Camera> _camera )
{
	this->camera = _camera;
}


bool Renderer_Interface::isCameraSet(){
	if(this->camera!= nullptr){
		return true;
	}
	return false;
}
Sprite_Interface::~Sprite_Interface()
{
	if( this->renderer != nullptr ){
		delete renderer;
	}
}
void Sprite_Interface::render() const
{
	if(this->renderer != nullptr){
		if(this->renderer->isCameraSet()){
			this->renderer->render();
		}
	}
}
