#ifndef BRICK_HPP
#define BRICK_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Global.hpp"

using namespace sf;

class Brick{
    public:
        Brick();
        virtual ~Brick();
        Vector2f getPosition();
        void setPosition(Vector2f position);
        RectangleShape getForm();
        void update();
    protected:
        RectangleShape m_rs;
    private:
};
#endif // BRICK_HPP
