#pragma once
#include "SFML/Graphics.hpp"
class Button
{
public:
	Button();
	Button(sf::Vector2<int> pos, sf::Vector2<int> size, std::string textureFileName);
	virtual ~Button();
	//getters
	int getHeight() { return size.y; };
	int getWidth() { return size.y; };
	sf::Vector2i getSize() { return size; }
	//setters
	void setWidth(sf::RenderWindow &window, int nWidth);
	void setHeight(sf::RenderWindow &window, int nHeight);
	virtual void setButtonTexture(const std::string fileName);
	

private:
	sf::Vector2<int> position;
	sf::Vector2<int> size;
	
	sf::Texture ButtonTexture;
	
};

