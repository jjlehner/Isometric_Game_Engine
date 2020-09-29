#ifndef GUARD_BASIC_RENDERERS_HPP
#define GUARD_BASIC_RENDERERS_HPP
#include "Interfaces.hpp"

class Grid_Renderer : public Renderer_Interface
{
public:
	void render() const override;
	Grid_Renderer(std::shared_ptr<Grid_Renderer> _sprite);
};

#endif

