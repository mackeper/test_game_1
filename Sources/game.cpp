/**
   Game.cpp
   
   @author Marcus Östling 
   @version 0
   */

#include "player.hpp"
#include "game.hpp"

Game::Game(int x, int y, std::string title) {
    sf::RenderWindow window(sf::VideoMode(x, y), title);
    
    Renderer renderer(&window, &entities);

    GameLoop(&renderer, &window);
}

Game::~Game() {
    for(Entity* e : entities) {
        delete e;
    }
}

void Game::GameLoop(Renderer* renderer, sf::RenderWindow* window) {
    while(window->isOpen()) {
        
        sf::Event event;
        while (window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window->close();
        }
        
        renderer->Render();
    }
    
    //delete renderer;
    //delete window;
}
