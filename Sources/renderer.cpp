/**
   renderer.cpp
   
   @author 
   @version 
   */

#include "renderer.hpp"

Renderer::Renderer(sf::RenderWindow* _window) {
    window = _window;

    background = sf::Color::Black;
}

void Renderer::Render(std::vector<Entity*>* entities) {
    window->clear(background);

    for(Entity* e : *entities) {
        window->draw(*e->GetShape());
    }

    window->display();
}
