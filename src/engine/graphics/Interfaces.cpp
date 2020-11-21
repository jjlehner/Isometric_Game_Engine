#include "Interfaces.hpp"
#include <memory>

Renderer_Interface::Renderer_Interface( Camera *_camera ): camera(_camera)
{
}

void Sprite_Interface::tick()
{
}
void Sprite_Interface::render() const
{
	if(Renderer_Interface* r = getRenderer(); this->getRenderer() != nullptr){
		r->render();
	}
}

bool Sprite_Interface::keyboardEventHandler( const SDL_Event *const event)
{
	return false;
}

