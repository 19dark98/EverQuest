
#include "MainMenu.h"
#include "GameEngine.h"
#include <iostream>

MainMenu::MainMenu()
{
}
MainMenu::MainMenu(GameEngine * game)
{
	getRefs(game);
}

MainMenu::~MainMenu()
{
}

void MainMenu::init()
{
	
}
void MainMenu::cleanup()
{

}

void MainMenu::pause()
{

}
void MainMenu::resume()
{

}

void MainMenu::HandleEvents(GameEngine *game)
{
	sf::RenderWindow *windowPtr = &(game->window);
	while (game->window.pollEvent(game->event)) {
		if (game->event.KeyPressed)
		{
			print();
			if (game->event.key.code == sf::Keyboard::Space) std::cout << "SpacePressed";
		}
	}
}
void MainMenu::Update(GameEngine *game)
{

}
void MainMenu::Draw(GameEngine* game)
{

}

void MainMenu::print()
{
	std::cout << "Hello World";
}