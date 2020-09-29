#ifndef GUARD_GRID_HPP
#define GUARD_GRID_HPP

#include "graphics/Basic_Renderers.hpp"
#include "graphics/Interfaces.hpp"

#include <memory>
#include <vector>

class Grid : public Sprite_Interface
{
public:
	using Map_Vector_Type = std::vector<int>;
	using Map_Type = std::vector<std::vector<int>>;
	const Map_Vector_Type::size_type WIDTH;
	const Map_Type::size_type HEIGHT;
	const int TILE_EDGE_LENGTH = 100;
	const int TILE_HEIGHT_UNITS = 30;
	Map_Type height_map{ HEIGHT, std::vector<int>( WIDTH, 0 ) };

	virtual void render() const override;
	Grid( int width, int height );
};
#endif
