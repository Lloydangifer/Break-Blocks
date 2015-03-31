#include "../include/Ball.hpp"

Ball::Ball(){
    m_cs = CircleShape(10);
    m_cs.setFillColor(Color::Black);
    m_cs.setPosition(Vector2f(400,450));
}
Vector2f Ball::getPosition(){
    return m_cs.getPosition();
}
void Ball::setPosition(Vector2f position){
    m_cs.setPosition(position);
}
CircleShape Ball::getForm(){
    return m_cs;
}
void Ball::update(){
}
Ball::~Ball(){
    //dtor
}
