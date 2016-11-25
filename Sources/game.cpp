/**
   Game.cpp
   
   @author Marcus Östling 
   @version 0
   */

#include "player.hpp"
#include "game.hpp"
#include <random>

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
    while(window->isOpen()) {
        
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        
        entities.push_back(new Player());
        
        controller->Update(&entities);
        renderer->Render(&entities);
    }
    
    //delete renderer;
    //delete window;
}
