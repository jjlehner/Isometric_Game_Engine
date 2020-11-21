
#include "Scene.hpp"
#include "Camera.hpp"

Scene::Scene( SDL_Renderer *renderer, unsigned int window_width, unsigned int window_height)
{
	camera = new Camera(renderer, window_width, window_height);
}
void Scene::addSpriteToScene( Sprite_Interface *spriteInterface ){
	sprite_objects.push_back(spriteInterface);
}

void Scene::tick(){
	if(camera != nullptr)
	{
		std::shared_ptr<SDL_Event> event;
		while ( event = this->event_queue.pop(), event != nullptr )
		{
			camera->keyboardHandler( event.get() );
		}
		camera->tick();
		for ( Sprite_Interface *const x : sprite_objects )
		{
			x->tick();
		}
	}
}
void Scene::render() const{
	for ( Sprite_Interface *const x : sprite_objects )
	{
		x->render();
	}
}
