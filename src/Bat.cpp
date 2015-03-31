#include "../include/Bat.hpp"

Bat::Bat(){
    m_rs = RectangleShape(Vector2f(100,20));
    m_rs.setFillColor(Color::Blue);
    m_rs.setPosition(Vector2f(350,550));
}
Vector2f Bat::getPosition(){
    return m_rs.getPosition();
}
void Bat::setPosition(Vector2f position){
    m_rs.setPosition(position);
}
RectangleShape Bat::getForm(){
    return m_rs;
}
void Bat::update(){
    if(Keyboard::isKeyPressed(Keyboard::Q)){
        if(m_rs.getPosition().x > 0){
            m_rs.move(-5,0);
        }
    }
    if(Keyboard::isKeyPressed(Keyboard::D)){
        if(m_rs.getPosition().x < 700){
            m_rs.move(5,0);
        }
    }
}
Bat::~Bat(){
    //dtor
}
