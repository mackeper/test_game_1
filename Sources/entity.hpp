#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics.hpp>

class Entity {
private:
protected:
    int size, x, y, velocityX, velocityY, speed;
    sf::Color color;
    sf::Shape *shape;
public:
    Entity(int _size, int _x, int _y, int _speed);
    virtual ~Entity();
    virtual bool Intersects(int _x, int _y)=0;
    virtual void Update()=0;

    sf::Shape* GetShape();
    int GetX();
    int GetY();
    void Up();
    void Down();
    void Left();
    void Right();
};


#endif
