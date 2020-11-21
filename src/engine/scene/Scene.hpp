#ifndef GUARD_SCENE_HPP
#define GUARD_SCENE_HPP

#include "Camera.hpp"
#include "Thread_Safe_Queue.hpp"
#include <memory>
#include <list>

class Sprite_Interface;
class Scene
{
private:
	std::list<Sprite_Interface*> sprite_objects;
public:
	Camera *camera;
	Thread_Safe_Queue<SDL_Event> event_queue;

	Scene(SDL_Renderer *renderer, unsigned int window_width, unsigned int window_height);
	~Scene();

	void addSpriteToScene(Sprite_Interface* spriteInterface);
	void tick();
	void render() const;
};
#endif
