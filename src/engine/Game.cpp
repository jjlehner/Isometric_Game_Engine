#include "Game.hpp"
#include "../Testing_Utilities.hpp"

void Game::gameStart(){
	w->loadScene(Testing_Utilities::getTestScene(w->renderer,w->WIDTH,w->HEIGHT));
	std::thread gameThread(&Window::gameLoop,w);
	gameThread.join();
}

Game::~Game()
{
	delete w;
}