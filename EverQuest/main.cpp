#include "GameEngine.h"

int main()
{
	GameEngine game;
	//init gameEngine
	game.init();
	

	//runGameLoop
	while (game.window.isOpen())
	{
		//handle Events
		game.peekState()->HandleEvents(&game);
	}

	return 0;
}