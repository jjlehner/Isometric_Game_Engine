#include "Basic_Renderers.hpp"
#include "Interfaces.hpp"
#include <memory>

Grid_Renderer::Grid_Renderer( std::shared_ptr<Grid> _sprite ) : grid_sprite( _sprite ), Renderer_Interface( _sprite )
{
}

void Grid_Renderer::render() const
{
	if ( this->camera->renderer == nullptr )
	{
		return;
	}

	using y_size_type = Grid::Map_Type::size_type;
	using x_size_type = Grid::Map_Vector_Type::size_type;
	const y_size_type y_length = grid_sprite->HEIGHT;
	const x_size_type x_length = grid_sprite->WIDTH;

	SDL_SetRenderDrawColor( camera->renderer, 255, 255, 255, SDL_ALPHA_OPAQUE );

	for ( x_size_type y = 0; y < y_length - 1; y++ )
	{
		float yF = (y) * grid_sprite->TILE_EDGE_LENGTH;
		float yF_con = (y+1) * grid_sprite->TILE_EDGE_LENGTH;

		for ( y_size_type x = 0; x < x_length - 1; x++ )
		{
			float xF = (x) * grid_sprite->TILE_EDGE_LENGTH;
			float xF_con = (x+1) * grid_sprite->TILE_EDGE_LENGTH;

			int height_start = grid_sprite->height_map[y][x]*grid_sprite->TILE_HEIGHT_UNITS;
			int height_right = grid_sprite->height_map[y+1][x]*grid_sprite->TILE_HEIGHT_UNITS;
			int height_below = grid_sprite->height_map[y][x+1]*grid_sprite->TILE_HEIGHT_UNITS;

			float iso_x_start = xF - yF + camera->x;
			float iso_y_start = (yF + xF) / 2.0 + camera->y - height_start;

			float iso_x_right = xF - yF_con + camera->x;
			float iso_y_right = (yF_con + xF) / 2.0 + camera->y - height_right;

			float iso_x_below = xF_con - yF + camera->x;
			float iso_y_below = (yF+ xF_con) / 2.0 + camera->y - height_below;
			SDL_RenderDrawLine( camera->renderer, iso_x_start,iso_y_start ,iso_x_right, iso_y_right);
			SDL_RenderDrawLine( camera->renderer, iso_x_start, iso_y_start,iso_x_below,iso_y_below );
		}
	}
}