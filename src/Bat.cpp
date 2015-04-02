#include "../include/Bat.hpp"

Bat::Bat(){
    this->m_rs = RectangleShape(Vector2f(100,20));
    this->m_rs.setFillColor(Color::Blue);
    this->m_rs.setPosition(Vector2f(350,550));
}
Vector2f Bat::getPosition(){
    return this->m_rs.getPosition();
}
void Bat::setPosition(Vector2f position){
    this->m_rs.setPosition(position);
}
RectangleShape Bat::getForm(){
    return this->m_rs;
}
void Bat::update(){
    if(Keyboard::isKeyPressed(Keyboard::Q)){
        if(this->m_rs.getPosition().x > 0){
            this->m_rs.move(-5,0);
        }
    }
    if(Keyboard::isKeyPressed(Keyboard::D)){
        if(this->m_rs.getPosition().x < 700){
            this->m_rs.move(5,0);
        }
    }
}
Bat::~Bat(){
    //dtor
}
