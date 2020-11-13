#include "Game.hpp"
#include <thread>
int main()
{
	Game *g = new Game;
	std::thread gameThread(&Game::gameStart,g);
	gameThread.join();
}