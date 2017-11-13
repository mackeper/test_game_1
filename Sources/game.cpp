/**
   Game.cpp
   
   @author Marcus Östling 
   @version 0
*/

#include "player.hpp"
#include "game.hpp"
#include <iostream>

Game::Game(int x, int y, std::string title) {
    sf::RenderWindow window(sf::VideoMode(x, y), title);

    Renderer renderer(&window);
    Controller controller;

    GameLoop(&renderer, &controller, &window);
}

Game::~Game() {
    for(Entity* e : entities) {
        delete e;
    }
}

void Game::GameLoop(Renderer* renderer, Controller* controller, sf::RenderWindow* window) {
    Entity* player = new Player(30,10,10,1,sf::Color::Red);
    entities.push_back(player);
    while(window->isOpen()) {
        
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                window->close();
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
                player->Up();
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
                player->Right();
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
                player->Down();
            } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
                player->Left();
            }
        }
        
        controller->Update(&entities);
        renderer->Render(&entities);
    }
    
    delete player;
}
