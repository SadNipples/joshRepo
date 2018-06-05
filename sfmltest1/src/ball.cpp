#include "ball.h"
#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>
ball::ball()
{
    posx=600;
    posy=10;
    diameter=20;
    r=diameter/2;
    direction=1;
    //slope=1+(posy/posx);
   // slope=1+(velocityY/velocityX);
    angle=15;
    velocityX=sin(angle*0.017453293);
    velocityY=cos(angle*0.017453293);




    ballShape.setFillColor(sf::Color::Magenta);
    ballShape.setOutlineThickness(2);
    ballShape.setOutlineColor(sf::Color::Cyan);
    ballShape.setRadius(diameter/2);
    ballShape.setPosition(posx,posy);

}


bool ball::ballCollide(float x)
{
    if(posy>=480&&posy<=520 && posx > x && posx< x+100)
        return true;
    return false;
}

void ball::moveBall(float x)
{
    bool padCollide;
    padCollide = ballCollide(x);
 //   std::cout<<padCollide<<std::endl;
    if(posy>600||posy<0||posx<0||posx>1300||padCollide)
       {
           angle*=-1;
           if(posy>600||posy<0||padCollide)
                direction*=-1;
            velocityX=sin(angle*0.017453293);
            velocityY=cos(angle*0.017453293);
       }

        posx=posx+velocityX*direction;
        posy=posy+velocityY*direction;


        ballShape.setPosition(posx,posy);



      /*if((posy+6>600 || posy<0 )||  ( posy==480 &&  ( posx+6 >= x  && posx+6<= x+100)))
        direction*=-1;
    if((posx<=0 || posx>=1300) || ((posy>=480&&posy<=500) &&((posx>=x+75&&posx<=x+100)||(posx>=x && posx<=x+25))))
        angle*=-1;
*/
}
