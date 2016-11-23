/**
   renderer.cpp
   
   @author 
   @version 
   */

#include "renderer.hpp"

Renderer::Renderer(sf::RenderWindow* _window, std::vector<Entity*>* _entities) {
    window = _window;
    entities = _entities;

    background = sf::Color::Black;
}

void Renderer::Render() {
    window->clear(background);

    for(Entity* e : *entities) {
        window->draw(*e->getShape());
    }

    window->display();
}
