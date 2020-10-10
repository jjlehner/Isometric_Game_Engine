
#include "Scene.hpp"
void Scene::addSpriteToScene( Sprite_Interface *spriteInterface ){
	sprite_objects.push_back(spriteInterface);
}