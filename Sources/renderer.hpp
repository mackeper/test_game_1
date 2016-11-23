#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "entity.hpp"

class Renderer {
private:
    sf::RenderWindow* window;
    std::vector<Entity*>* entities;

    sf::Color background;
    
public:
    Renderer(sf::RenderWindow* _window, std::vector<Entity*>* _entities);
    void Render();
};

#endif
