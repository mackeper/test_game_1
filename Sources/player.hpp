#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "entity.hpp"

class Player : public Entity {
public:
    Player();
    Player(int _size, int _x, int _y, sf::Color _color);

    bool Intersects(int _x, int _y);
    void Update();
};

#endif
