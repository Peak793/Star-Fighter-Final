#pragma once

#include "SFML/Graphics.hpp"
#include "SFML/Audio.hpp"
#include <iostream>

#define MAX_SIZE_OF_ITEMS 4

class Menu
{
private:
	//Game Logo , main memu UI
	sf::Sprite background;
	sf::Texture BGtexture;
	sf::Font Menufont;
	sf::Font LogoFont1;
	sf::Font LogoFont2;
	sf::Text menu[MAX_SIZE_OF_ITEMS];
	sf::Text Logo[3];
	sf::Clock clock;
	sf::Clock press;
	int updatelogo = -20;
	
	//soundtrack
	sf::Music soundtrack;

	//Variables
	int selectedIndex;
	bool FontSelect;

public:

public:
	Menu(float Width, float Height);
	~Menu();

	void	render(sf::RenderTarget &target);
	void	update(float &state, sf::RenderWindow& window);
	void	Move();


	void	initMenu(float Width, float Height);
	void	initLogo(float Width, float Height);
	void	updateLogo();
	void	pressMenu(float &state, sf::RenderWindow& window);
};

