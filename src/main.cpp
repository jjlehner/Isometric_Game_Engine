#include "Game.hpp"
#include <thread>
int main()
{
	Game *g;
	std::thread gameThread(&Game::gameStart,g);
	gameThread.join();
}