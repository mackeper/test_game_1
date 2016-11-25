#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "entity.hpp"

class Renderer {
private:
    sf::RenderWindow* window;

    sf::Color background;
    
public:
    Renderer(sf::RenderWindow* _window);
    void Render(std::vector<Entity*>* _entities);
};

#endif
