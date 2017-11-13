#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "entity.hpp"

class Player : public Entity {
public:
    Player(int _size, double _x, double _y, double _speed, sf::Color _color);
    virtual ~Player();

    bool Intersects(int x, int y);
    void Update();
};

#endif
