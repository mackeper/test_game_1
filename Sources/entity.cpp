/**
   entity.cpp
   
   @author Marcus Östling 
   @version 0
   */

#include "entity.hpp"

Entity::Entity(int _size, double _x, double _y, double _speed) {
    size = _size;
    x = _x;
    y = _y;
    speed = _speed;
    velocity.x = 0;
    velocity.y = 0;
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

double sigmoid(int x) {
    return 0.0; 
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
