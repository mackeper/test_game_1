/**
   main.cpp
   
   @author  Marcus Östling
   @version 0
   */

#include "game.hpp"

int main()
{
    Game game(1280,720,"Best game");
    /*
    sf::RenderWindow window(sf::VideoMode(1280, 720), "SFML works!");

    std::vector<Entity*> entities;

    entities.push_back(new Player());
    
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);
        
        for(Entity* e : entities) {
            window.draw(*e->getShape());
        }
        
        window.display();
    }

    for(Entity* e : entities) {
        delete e;
    }
    */
    return 0;
}
