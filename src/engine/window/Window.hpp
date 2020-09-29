#ifndef GUARD_WINDOW_HPP
#define GUARD_WINDOW_HPP
#include <SDL2/SDL.h>
#include <atomic>
#include <thread>
class Camera{
private:
public:
	int x = 500;
	int y = 0;
	int zoom = 1;
	SDL_Renderer *renderer = nullptr;

	Camera(SDL_Renderer *);
};
class Window
{
private:
	std::thread handler;

	// The window we'll be rendering to
	SDL_Window  *window = nullptr;

	std::shared_ptr<Camera> camera = nullptr;

	void universal_thread_handler();
public:
	std::atomic<bool> closed{ false };
	Window();
	bool isRunning();
	~Window() = default;
	void modifyScreen();

	std::shared_ptr<Camera> getCamera();
};
#endif