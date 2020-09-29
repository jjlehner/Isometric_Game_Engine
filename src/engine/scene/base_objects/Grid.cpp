#include "Grid.hpp"
#include "graphics/Basic_Renderers.hpp"
#include "graphics/Interfaces.hpp"
#include <SDL.h>
#include <memory>

Grid::Grid( int width, int height )
	: WIDTH( width ), HEIGHT( height ),
	  Sprite_Interface( std::make_unique<Grid_Renderer>( std::shared_ptr<Grid>( this ) ) )
{

}

void Grid::render() const
{
	renderer->render();
}