/**
   controller.cpp
   
   @author 
   @version 
   */

#include "controller.hpp"

Controller::Controller() {

}

void Controller::Update(std::vector<Entity*>* entities) {
    for(Entity* e : *entities) {
        e->Update();
    }
}
