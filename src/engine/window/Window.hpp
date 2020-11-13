#ifndef GUARD_WINDOW_HPP
#define GUARD_WINDOW_HPP

#include "Thread_Safe_Queue.hpp"
#include "graphics/Interfaces.hpp"
#include "scene/Scene.hpp"
#include <SDL2/SDL.h>
#include <atomic>
#include <map>
#include <thread>
class Camera
{
public:
	int x = 500;
	int y = 0;
	int zoom = 1;

	bool track_player = false;

	SDL_Renderer *renderer = nullptr;

	std::map<SDL_Keycode, bool> buttons_engaged;

	void keyboardHandler( const SDL_Event *const );
	Camera( SDL_Renderer * );

	void tick();
	~Camera();
};

class Sprite_Interface;
class Scene;
class Window
{
private:
	std::thread handler;

	// The window we'll be rendering to
	SDL_Window *window = nullptr;

	std::shared_ptr<Camera> camera = nullptr;
	std::shared_ptr<Scene> current_scene = std::make_shared<Scene>();

	void universal_thread_handler();

	Sprite_Interface *player = nullptr;
	bool keyboardEventHandler( const SDL_Event *const );

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
	void setPlayer( Sprite_Interface *spr );

	void gameLoop();

	static constexpr unsigned int MILLISECONDS_PER_TICK = 33;
};
#endif