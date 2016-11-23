/**
   entity.cpp
   
   @author 
   @version 
   */

#include "entity.hpp"

sf::Shape* Entity::getShape() {
        return shape;
    }

int Entity::getX() {
        return x;
    }

int Entity::getY() {
        return y;
    }
