#ifndef GUARD_GRID_HPP
#define GUARD_GRID_HPP

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
	const int TILE_EDGE_LENGTH = 30;
	const int TILE_HEIGHT_UNITS = 9;
	Map_Type height_map{ HEIGHT, std::vector<int>( WIDTH, 0 ) };
	~Grid() = default;
	Grid( int width, int height );
};

class Grid_Renderer : public Renderer_Interface
{
	const Grid* const GRID;
public:
	Grid_Renderer(const Grid* const grid);
	virtual void render() const override;
	virtual ~Grid_Renderer() = default;
};

#endif
