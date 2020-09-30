//
// Created by jjl119 on 29/09/2020.
//

#include "Man.hpp"
#include <graphics/Basic_Renderers.hpp>
#include <memory>
Man::Man() : Sprite_Interface( std::make_unique<Man_Renderer>( std::shared_ptr<Man>( this ) ) )
{
}
void Man::render() const
{
}