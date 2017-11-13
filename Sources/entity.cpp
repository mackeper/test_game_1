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
    up = true;
}

void Entity::Down() {
    down = true;
}

void Entity::Left() {
    left = true;;
}

void Entity::Right() {
    right = true;
}

void Entity::FalseMovement() {
    up = false;
    down = false;
    right = false;
    left = false;
}

void Entity::Update() {
    shape->setPosition((int) x, (int) y);
    FalseMovement();
}
