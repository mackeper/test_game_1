#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "entity.hpp"

class Player : public Entity {
public:
    Player(int _size, int _x, int _y, int _speed, sf::Color _color);
    virtual ~Player();

    bool Intersects(int _x, int _y);
    void Update();
};

#endif
