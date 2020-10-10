#ifndef GUARD_WINDOW_HPP
#define GUARD_WINDOW_HPP

#include <SDL2/SDL.h>
#include <atomic>
#include <thread>
#include "graphics/Interfaces.hpp"
#include "Thread_Safe_Queue.hpp"
class Camera
{
private:
public:
	int x = 500;
	int y = 0;
	int zoom = 1;
	SDL_Renderer *renderer = nullptr;

	Camera( SDL_Renderer * );

	~Camera();
};

class Sprite_Interface;
class Window
{
private:
	std::thread handler;

	// The window we'll be rendering to
	SDL_Window *window = nullptr;

	std::shared_ptr<Camera> camera = nullptr;

	void universal_thread_handler();

	class Controller;
	const std::unique_ptr<Controller> controller;

	void tick();
	void render();
public:
	Thread_Safe_Queue<SDL_Event> event_queue;

	std::atomic<bool> closed{ false };
	Window();
	bool isRunning();
	~Window();
	void modifyScreen();

	std::shared_ptr<Camera> getCamera();
	void setPlayer(Sprite_Interface * spr);

	void gameLoop();
};
#endif