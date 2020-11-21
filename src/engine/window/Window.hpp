#ifndef GUARD_WINDOW_HPP
#define GUARD_WINDOW_HPP

#include "Thread_Safe_Queue.hpp"
#include "graphics/Interfaces.hpp"
#include "scene/Scene.hpp"
#include <SDL2/SDL.h>
#include <atomic>
#include <map>
#include <thread>

class Sprite_Interface;
class Scene;
class Window
{
private:
	std::thread handler;

	// The window we'll be rendering to
	SDL_Window *window = nullptr;

	Scene *current_scene;

	void universal_thread_handler();

	bool keyboardEventHandler( const SDL_Event *const );

	void tick();
	void render();

public:
	const unsigned int WIDTH = 2000;
	const unsigned int HEIGHT = 1000;

	SDL_Renderer *renderer;

	std::atomic<bool> closed{ false };

	Window();
	~Window();

	void loadScene(Scene *scene);
	void modifyScreen();
	bool isRunning();

	std::shared_ptr<Camera> getCamera();
	void setPlayer( Sprite_Interface *spr );

	void gameLoop();

	static constexpr unsigned int MILLISECONDS_PER_TICK = 33;
};
#endif