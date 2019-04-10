#include "Button.h"



Button::Button()
{
	
}


Button::~Button()
{

}

//setters
void Button::setWidth(sf::RenderWindow &window, int nWidth)
{
	if (nWidth < 0) size.x = 0;
	else if (nWidth > window.getSize().x) size.x = window.getSize().x;
	else size.x = nWidth;
}
void Button::setHeight(sf::RenderWindow &window, int nHeight)
{
	if (nHeight < 0) size.y = 0;
	else if (nHeight > window.getSize().y) size.y = window.getSize().y;
	else size.y = nHeight;
}
void Button::setButtonTexture(const std::string fileName)
{
	ButtonTexture.loadFromFile(fileName, sf::IntRect(position, size));
}