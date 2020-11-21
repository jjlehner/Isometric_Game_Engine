#include "Grid.hpp"
#include "graphics/Interfaces.hpp"
#include <SDL.h>
#include <memory>

Grid::Grid( Camera *camera, int width, int height ) : WIDTH( width ), HEIGHT( height )
{
	renderer = new Grid_Renderer( camera, this );
}
Grid_Renderer::Grid_Renderer( Camera *camera, const Grid *const grid ) : Renderer_Interface( camera )
{
}

void Grid_Renderer::render() const
{
	using y_size_type = Grid::Map_Type::size_type;
	using x_size_type = Grid::Map_Vector_Type::size_type;
	const y_size_type y_length = GRID->HEIGHT;
	const x_size_type x_length = GRID->WIDTH;

	SDL_SetRenderDrawColor( camera->renderer, 255, 255, 255, SDL_ALPHA_OPAQUE );

	for ( x_size_type y = 0; y < y_length - 1; y++ )
	{
		float yF = (y)*GRID->TILE_EDGE_LENGTH;
		float yF_con = ( y + 1 ) * GRID->TILE_EDGE_LENGTH;

		for ( y_size_type x = 0; x < x_length - 1; x++ )
		{
			float xF = (x)*GRID->TILE_EDGE_LENGTH;
			float xF_con = ( x + 1 ) * GRID->TILE_EDGE_LENGTH;

			int height_start = GRID->height_map[y][x] * GRID->TILE_HEIGHT_UNITS;
			int height_x_delta = GRID->height_map[y + 1][x] * GRID->TILE_HEIGHT_UNITS;
			int height_y_delta = GRID->height_map[y][x + 1] * GRID->TILE_HEIGHT_UNITS;

			float iso_x_start = xF - yF;
			float iso_y_start = ( yF + xF ) / 2.0 - height_start;

			float iso_x_x_delta = xF - yF_con;
			float iso_y_x_delta = ( yF_con + xF ) / 2.0 - height_x_delta;

			float iso_x_y_delta = xF_con - yF;
			float iso_y_y_delta = ( yF + xF_con ) / 2.0 - height_y_delta;
			SDL_RenderDrawLine( camera->renderer, iso_x_start - camera->x, iso_y_start - camera->y,
								iso_x_x_delta - camera->x, iso_y_x_delta - camera->y );
			SDL_RenderDrawLine( camera->renderer, iso_x_start - camera->x, iso_y_start - camera->y,
								iso_x_y_delta - camera->x, iso_y_y_delta - camera->y );
		}
	}
}