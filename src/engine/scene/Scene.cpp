
#include "Scene.hpp"
void Scene::addSpriteToScene( Sprite_Interface *spriteInterface ){
	sprite_objects.push_back(spriteInterface);
}

const std::list<Sprite_Interface*>& Scene::getSprites()
{
	return sprite_objects;
}