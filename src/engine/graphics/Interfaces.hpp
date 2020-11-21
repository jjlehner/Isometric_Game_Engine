#ifndef GUARD_SPRITE_INTERFACE_HPP
#define GUARD_SPRITE_INTERFACE_HPP

#include <SDL.h>
#include <memory>

#include "scene/base_objects/Game_Object_Interface.hpp"

template<typename Renderer> requires std::derived_from<Renderer, Renderer_Interface>
class Sprite_Interface;

class Camera;

class Renderer_Interface {
protected:
    Camera *camera = nullptr;

public:
    virtual ~Renderer_Interface() = default;

    virtual void render() const = 0;
};

template<typename Renderer> requires std::derived_from<Renderer, Renderer_Interface>
class Sprite_Interface : public Game_Object_Interface {
public:
    int x = 0;
    int y = 0;
    int z = 0;

    virtual void tick() = 0;

    virtual void render() const = 0;

    Sprite_Interface(Camera  * camera);
    virtual ~Sprite_Interface() = default;

    virtual bool keyboardEventHandler(const SDL_Event *const);
};


#endif