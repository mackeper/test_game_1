#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics.hpp>

class Entity {
private:
protected:
    int size, x, y;
    sf::Color color;
    sf::Shape *shape;
public:
    virtual ~Entity() {
        delete shape;
    }
    virtual bool Intersects(int _x, int _y)=0;

    sf::Shape* getShape();
    int getX();
    int getY();
};


#endif
