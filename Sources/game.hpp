#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>
#include <string>
#include <vector>
#include "entity.hpp"
#include "renderer.hpp"

class Game {
private:
    std::vector<Entity*> entities;
public:
    Game(int x, int y, std::string title);
    virtual ~Game();
    void GameLoop(Renderer* renderer, sf::RenderWindow* window);
};

#endif
