#ifndef BALL_HPP
#define BALL_HPP

#include <iostream>
#include <SFML/Graphics.hpp>

using namespace sf;

class Ball{
    public:
        Ball();
        virtual ~Ball();
        Vector2f getPosition();
        void setPosition(Vector2f position);
        CircleShape getForm();
        void update();
    protected:
        CircleShape m_cs;
    private:
};

#endif // BALL_HPP
