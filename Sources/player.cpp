/**
   player.cpp
   
   @author Marcus Östling
   @version 0
   */

#include "player.hpp"

Player::Player(int _size, double _x, double _y, double _speed, sf::Color _color) :
    Entity(_size,_x,_y,_speed) {
        color = _color;

        shape = new sf::RectangleShape(sf::Vector2f(size,size));
        shape->setPosition(x,y);
        shape->setFillColor(color);
    }

Player::~Player() {
    delete shape;
}

bool Player::Intersects(int _x, int _y) {
        if(x <= _x && _x <= x + size &&
           y <= _y && _y <= x + size) {
            return true;
        }
        return false;
    }

void Player::Update() {
    shape->setPosition((int) x, (int) y);
}
