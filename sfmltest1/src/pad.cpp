#include "pad.h"
#include <SFML/Graphics.hpp>
#include <iostream>

pad::pad()
{
    sf::Vector2f tv2f;
    tv2f.x=100;
    tv2f.y=20;
    posx=600;
    posy=500;
    padShape.setFillColor(sf::Color::Magenta);
    padShape.setSize(tv2f);
    padShape.setPosition(posx,posy);

}
void pad::movePad(float x)
{
    if(x<1300-100&&x>0)
    {
        posx=x;
        padShape.setPosition(posx,posy);
    }

}
void pad::movePadKey(int x)
{
    std::cout<<x<<std::endl;
    if(x==71)
        posx=posx-10;
    if(x==72)
        posx=posx+10;
    padShape.setPosition(posx,posy);
}

