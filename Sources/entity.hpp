#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <SFML/Graphics.hpp>

class Entity {
private:
protected:
    int size;
    double x, y, speed;
    bool up, down, left, right;
    sf::Vector2f velocity;
    sf::Color color;
    sf::Shape *shape;

    void FalseMovement();
public:
    Entity(int _size, double _x, double _y, double _speed);
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
