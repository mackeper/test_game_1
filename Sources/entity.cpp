/**
   entity.cpp
   
   @author Marcus Östling 
   @version 0
   */

#include "entity.hpp"

Entity::Entity(int _size, int _x, int _y, int _speed) {
    size = _size;
    x = _x;
    y = _y;
    speed = _speed;
}

Entity::~Entity() {
    delete shape;
}

sf::Shape* Entity::GetShape() {
        return shape;
}

int Entity::GetX() {
        return x;
}

int Entity::GetY() {
        return y;
}

void Entity::Up() {
    y -= speed;
}

void Entity::Down() {
    y += speed;
}

void Entity::Left() {
    x -= speed;
}

void Entity::Right() {
    x += speed;
}
