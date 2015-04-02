#ifndef BALL_HPP
#define BALL_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Global.hpp"

using namespace sf;

class Ball{
    public:
        Ball();
        virtual ~Ball();
        Vector2f getPosition();
        Vector2f getDirection();
        void setPosition(Vector2f position);
        void setDirection(Vector2f direction);
        CircleShape getForm();
        void update();
        bool ScreenWidthCollision();
        bool ScreenHeightCollision();
    protected:
        CircleShape m_cs;
        Vector2f m_direction;
    private:
};

#endif // BALL_HPP
