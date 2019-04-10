#include "GameEngine.h"

void GameEngine::init()
{
	createWindow(400, 16 / 9, "Test");
	pushState(new MainMenu(this));
}

void GameEngine::pushState(GameState *nState)
{
	states.push_back(nState);
}
GameState * GameEngine::peekState()
{
	return states[states.size() - 1];
}
void GameEngine::popState()
{
	states.pop_back();
}
void GameEngine::createWindow(int height, double Ratio, std::string name)
{
	window.create(sf::VideoMode(height, height*Ratio), name);
}

