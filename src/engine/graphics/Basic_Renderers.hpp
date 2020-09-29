#ifndef GUARD_BASIC_RENDERERS_HPP
#define GUARD_BASIC_RENDERERS_HPP
#include "Interfaces.hpp"
#include "scene/base_objects/Grid.hpp"

class Grid;
class Grid_Renderer : public Renderer_Interface
{
private:
	std::shared_ptr<Grid> grid_sprite;
public:
	void render() const override;
	Grid_Renderer( std::shared_ptr<Grid> );
};

#endif
