#include "../include/Brick.hpp"

Brick::Brick(){
    this->m_rs = RectangleShape(Vector2f(50,20));
    this->m_rs.setFillColor(Color::Red);
    this->m_rs.setOutlineThickness(-1);
    this->m_rs.setOutlineColor(Color::Black);
}
Vector2f Brick::getPosition(){
    return this->m_rs.getPosition();
}
void Brick::setPosition(Vector2f position){
    this->m_rs.setPosition(position);
}
RectangleShape Brick::getForm(){
    return this->m_rs;
}
void Brick::update(){
}
Brick::~Brick(){
    //dtor
}
