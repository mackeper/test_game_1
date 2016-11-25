/**
   entity.cpp
   
   @author Marcus Östling 
   @version 0
   */

#include "entity.hpp"

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
    y -= speedY;
}

void Entity::Down() {
    y += speedY;
}

void Entity::Left() {
    x -= speedX;
}

void Entity::Right() {
    x += speedX;
}
