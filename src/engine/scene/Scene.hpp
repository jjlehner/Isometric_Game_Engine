#ifndef GUARD_SCENE_HPP
#define GUARD_SCENE_HPP

#include "scene/base_objects/Game_Object_Interface.hpp"
#include "graphics/Interfaces.hpp"
#include <list>

class Sprite_Interface;
class Scene
{
private:
	std::list<Sprite_Interface*> sprite_objects;
public:
	void addSpriteToScene(Sprite_Interface* spriteInterface);
	const std::list<Sprite_Interface*>& getSprites();
};
#endif
