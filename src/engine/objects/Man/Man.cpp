//
// Created by jjl119 on 29/09/2020.
//

#include "Man.hpp"
#include <memory>

Man_Renderer::Man_Renderer( const Man *const man ) : MAN( man )
{
	texture = load_texture( TEXTURE_PATH );

}
void Man_Renderer::render() const
{

}
Man::Man()
{
}
void Man::render() const
{
}