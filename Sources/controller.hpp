#ifndef CONTROLLER_HPP
#define CONTROLLER_HPP

#include <SFML/Graphics.hpp>
#include <vector>
#include "entity.hpp"

class Controller {
private:
    std::vector<Entity*>* entities;

public:
    Controller();
    void Update(std::vector<Entity*>* entities);
    
};

#endif
