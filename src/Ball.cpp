#include "../include/Ball.hpp"

Ball::Ball(){
    this->m_cs = CircleShape(10);
    this->m_cs.setFillColor(Color::Black);
    this->m_cs.setPosition(Vector2f(400,450));
    this->m_direction.x=-5.f;
    this->m_direction.y=0.f;
}
Vector2f Ball::getPosition(){
    return this->m_cs.getPosition();
}
Vector2f Ball::getDirection(){
    return this->m_direction;
}
void Ball::setPosition(Vector2f position){
    this->m_cs.setPosition(position);
}
void Ball::setDirection(Vector2f direction){
    this->m_direction=direction;
}
CircleShape Ball::getForm(){
    return this->m_cs;
}
void Ball::update(){
    if(ScreenWidthCollision() || ScreenHeightCollision()){
        //int dir_x=(int)((rand()%2)-1);
        //int dir_y=(int)((rand()%2)-1);
        //this->setDirection(Vector2f(dir_x*5,dir_y*5));
        /*this->m_cs.move(this->m_direction);*/
        this->setDirection(Vector2f(-this->getDirection().x,-this->getDirection().y));

    }
    this->m_cs.move(this->m_direction);
}
bool Ball::ScreenWidthCollision(){
    if((this->m_cs.getPosition().x > 0) && (this->m_cs.getPosition().x < SCREEN_WIDTH-20)){
        return false;
    }
    else{
        return true;
    }
}
bool Ball::ScreenHeightCollision(){
    if((this->m_cs.getPosition().y > 0) && (this->m_cs.getPosition().y < SCREEN_HEIGHT-20)){
        return false;
    }
    else{
        return true;
    }
}
Ball::~Ball(){
    //dtor
}
