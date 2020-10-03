//
// Created by jjl119 on 29/09/2020.
//

#include "Man.hpp"
#include <memory>

Man_Renderer::Man_Renderer( std::shared_ptr<const Camera> camera, const Man *const man ) : Renderer_Interface(camera), MAN( man ), texture(this, "../res/generic_man.png", 138, 138)
{

}

void Man_Renderer::render() const
{
	texture.render();
}

const Man *const Man_Renderer::getSprite() const
{
	return MAN;
}

Man::Man(std::shared_ptr<const Camera> camera)
{
	renderer = new Man_Renderer(camera, this);
}