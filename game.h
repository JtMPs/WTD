#pragma once
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Field.h"

class Game{
public:
	static void start();

	static bool isExit();
	sf::RenderWindow& Game::getWindow();
	Field& Game::getField();

private:
	static void gameLoop();
	
	static bool exit;
	static Field field;
	static sf::RenderWindow renderWindow;

};