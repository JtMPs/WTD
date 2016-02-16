#include "game.h"


void Game::start(){

	renderWindow.create(sf::VideoMode(640, 480, 32), "WTD");

	//tutaj dodajemy obiekty i tworzymy do jakiegos kontenera

	while (!exit){
		gameLoop();
	}
	renderWindow.close();

}

void Game::gameLoop(){
	sf::Event event;
	renderWindow.pollEvent(event);
	renderWindow.clear(sf::Color(0, 0, 0));
	renderWindow.display();

	if (event.type == sf::Event::Closed)
		exit = true;
}



sf::RenderWindow& Game::getWindow()
{
	return renderWindow;
}

Field& Game::getField(){
	return field;
}


sf::RenderWindow Game::renderWindow;
bool Game::exit = false;
Field Game::field;


//static DrawableGameObjectContainer gameObjectContainer;
