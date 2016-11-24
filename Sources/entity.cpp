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
