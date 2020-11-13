#include "Game.hpp"

void Game::gameStart(){
	w->gameLoop();
}

Game::~Game()
{
	delete w;
}