#ifndef _GameState_H_
#define _GameState_H_
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"

class GameEngine;
class GameState
{
protected:
	sf::RenderWindow * windowPtr;
	sf::Event * eventPtr;
public:
	GameState();
	//start end Functions
	virtual void init() = 0;
	virtual void cleanup() = 0;

	virtual void pause() = 0;
	virtual void resume() = 0;

	virtual void HandleEvents(GameEngine *game) = 0;
	virtual void Update(GameEngine *game) = 0;
	virtual void Draw(GameEngine* game) = 0;

	virtual void getRefs(GameEngine*);

private:
	
};


#endif // !GameState_H


