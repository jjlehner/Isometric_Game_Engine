// Using SDL and standard IO
#include "Window.hpp"
#include <SDL2/SDL.h>
#include <memory>
#include <stdio.h>
#include <thread>

Camera::Camera( SDL_Renderer *_renderer ) : renderer( _renderer )
{
}
Camera::~Camera()
{
	SDL_DestroyRenderer( renderer );
}
// Screen dimension constants
const int SCREEN_WIDTH = 2000;
const int SCREEN_HEIGHT = 1000;

void Window::universal_thread_handler()
{

	// Event handler
	SDL_Event e;

	// While application is running
	while ( !closed.load() )
	{
		// Handle events on queue
		while ( SDL_PollEvent( &e ) != 0 )
		{
			// User requests quit
			if ( e.type == SDL_QUIT )
			{
				closed.store( true );
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
		window = SDL_CreateWindow( "Isometric World", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH,
								   SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if ( window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		}
		else
		{
			handler = std::thread( &Window::universal_thread_handler, this );
			handler.detach();
			SDL_Renderer *renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );
			camera = std::make_shared<Camera>( renderer );
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
std::shared_ptr<Camera> Window::getCamera()
{
	return this->camera;
}