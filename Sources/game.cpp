/**
   Game.cpp
   
   @author Marcus Östling 
   @version 0
   */


#include <SFML/Graphics.hpp>
#include <vector>
#include "entity.hpp"
#include "player.hpp"
#include "game.hpp"

Game::Game(int x, int y, std::string title) {
    sf::RenderWindow window(sf::VideoMode(x, y), title);
}
