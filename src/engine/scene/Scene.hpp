#ifndef GUARD_SCENE_HPP
#define GUARD_SCENE_HPP

#include "scene/base_objects/Game_Object_Interface.hpp"
#include "graphics/Interfaces.hpp"
#include <list>
class Scene
{
private:
	std::list<Sprite_Interface*> sprite_objects;

public:
	void addSpriteToScene(Sprite_Interface* spriteInterface);
};
#endif
