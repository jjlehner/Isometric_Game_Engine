// Using SDL and standard IO
#include "Window_Controller.hpp"
#include <SDL2/SDL.h>
#include <memory>
#include <objects/Man/Man.hpp>
#include <scene/base_objects/Grid.hpp>
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
				this->event_queue.push( e );
				break;
			case SDL_KEYUP:
				this->event_queue.push( e );
				break;
			}
		}
	}
}
Window::Window() : controller( std::make_unique<Controller>() )
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

bool Window::Controller::keyboardEventHandler( const SDL_Event *const event )
{
	if ( player != nullptr )
	{
		player->keyboardEventHandler( event );
	}
	return true;
}

void Window::setPlayer( Sprite_Interface *spr )
{
	this->controller->player = spr;
}
void Window::gameLoop()
{
	Grid grid( getCamera(), 100, 100 );
	Man man( getCamera() );
	grid.height_map[3][4] = 1;
	grid.height_map[3][6] = -1;
	grid.height_map[5][7] = 2;
	grid.height_map[5][6] = 1;
	man.renderer->setCamera( getCamera() );
	grid.renderer->setCamera( getCamera() );
	setPlayer( &man );
	while ( !closed )
	{
		tick();
		// render();
		SDL_SetRenderDrawColor( getCamera()->renderer, 0, 0, 0, SDL_ALPHA_OPAQUE );

		SDL_RenderClear( getCamera()->renderer );
		grid.render();
		man.render();
		auto a = dynamic_cast<Man_Renderer *>( man.renderer );
		a->texture.setPosition( ( a->texture.getPosition() + 1 ) % 8 );
		SDL_RenderPresent( getCamera()->renderer );
		std::chrono::milliseconds sec( 100 );
		std::this_thread::sleep_for( std::chrono::duration_cast<std::chrono::milliseconds>( sec ) );
	}
}
void Window::tick()
{
	std::shared_ptr<SDL_Event> event;
	while ( event = this->event_queue.pop(), event != nullptr )
	{
		controller->keyboardEventHandler( event.get() );
	}
}

void Window::render()
{
}
