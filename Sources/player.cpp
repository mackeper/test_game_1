/**
   player.cpp
   
   @author Marcus Östling
   @version 0
   */

#include "player.hpp"

Player::Player() {
    x = 0;
    y = 0;
    size = 30;
    color = sf::Color::Red;

    shape = new sf::CircleShape(size, 3);
    shape->setPosition(x,y);
    shape->setFillColor(color);
}

Player::Player(int _size, int _x, int _y, sf::Color _color) {
        size = _size;
        x = _x;
        y = _y;
        color = _color;

        shape = new sf::CircleShape(size);
        shape->setPosition(x,y);
        shape->setFillColor(color);
    }

bool Player::Intersects(int _x, int _y) {
        if(x <= _x && _x <= x + size &&
           y <= _y && _y <= x + size) {
            return true;
        }
        return false;
    }

void Player::Update() {
    
}
