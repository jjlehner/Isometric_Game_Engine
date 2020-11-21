#include <SDL2/SDL.h>
#include <memory>
#include <objects/Man/Man.hpp>
#include <scene/base_objects/Grid.hpp>
#include <thread>
#include "Window.hpp"


void Window::universal_thread_handler()
{

	// Event handler
	SDL_Event e;

	// While application is running
	while ( !closed.load() )
	{
		// Handle events on queue
		while ( SDL_WaitEvent( &e ) && closed.load() == false )
		{
			// User requests quit
			switch ( e.type )
			{
			case SDL_QUIT:
				closed.store( true );
				break;
				/*
			case SDL_MOUSEBUTTONDOWN:
				controller->mouseEventHandler(&e);
				break;
			case SDL_MOUSEBUTTONUP:
				controller->mouseEventHandler(&e);
				break;
			case SDL_MOUSEMOTION:
				controller->mouseEventHandler(&e);
				break;
				 */
			case SDL_KEYDOWN:
				current_scene->event_queue.push( e );
				break;
			case SDL_KEYUP:
				current_scene->event_queue.push( e );
				break;
			}
		}
	}
}
Window::Window()
{
	// Initialize SDL
	if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	}
	else
	{
		// Create window
		window = SDL_CreateWindow( "Isometric World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIDTH,
								   HEIGHT, SDL_WINDOW_SHOWN );
		if ( window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		}
		else
		{
			handler = std::thread( &Window::universal_thread_handler, this );
			handler.detach();
			renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );
		}
	}

}
Window::~Window()
{
	// Destroy window
	SDL_DestroyWindow( window );
	// Quit SDL subsystems
	SDL_Quit();
}

void Window::loadScene(Scene * _scene)
{
	this->current_scene = _scene;
}
void Window::gameLoop()
{
	Uint32 start = SDL_GetTicks();
	while ( !closed )
	{
		if(SDL_GetTicks() - start >= MILLISECONDS_PER_TICK)
		{
			tick();
			render();
			start = SDL_GetTicks();
		}
	}
}
void Window::tick()
{
	current_scene->tick();
}

void Window::render()
{
	SDL_SetRenderDrawColor( getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );
	SDL_RenderClear( getCamera()->renderer );
	for(Sprite_Interface*const x : current_scene->getSprites()){
		x->render();
	}
	SDL_RenderPresent( getCamera()->renderer );
}

