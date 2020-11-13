
#ifndef GUARD_GAME_HPP
#define GUARD_GAME_HPP

#include "window/Window.hpp"
class Game{
	Window* w = new Window();
public:
	void gameStart();
	void gameStop();
	void pauseGame();
	~Game();
};
#endif
