#ifndef BAT_HPP
#define BAT_HPP

#include <iostream>
#include <SFML/Graphics.hpp>
#include "Global.hpp"

using namespace sf;

class Bat{
    public:
        Bat();
        virtual ~Bat();
        Vector2f getPosition();
        void setPosition(Vector2f position);
        RectangleShape getForm();
        void update();
    protected:
        RectangleShape m_rs;
    private:
};
#endif // BAT_HPP
