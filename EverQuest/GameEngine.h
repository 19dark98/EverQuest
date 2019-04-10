#pragma once
//sfml includes
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

//user made dependencies
#include "MainMenu.h"

//safe
#include "SoundManager.h"
#include "AnimationHandler.h"

//std Lib dependencies
#include <vector>

class GameState;
class GameEngine : public AnimationHandler, public SoundManager
{
public:
	void init();
	void cleanup();

	//state management
	void pushState(GameState *nState);
	GameState * peekState();
	void popState();

	//isRunning




	sf::RenderWindow window;
	sf::Event event;
	//test info
	int i = 1;
private:
	std::vector<GameState *> states;

	//window functions
	void createWindow(int height, double Ratio, std::string name);
};

