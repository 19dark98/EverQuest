#include "GameState.h"
#include "GameEngine.h"


GameState::GameState()
{
	
}


void GameState::getRefs(GameEngine* game)
{
	this->eventPtr = &game->event;
	this->windowPtr = &game->window;
}