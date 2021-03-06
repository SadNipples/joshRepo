#include <SFML/Graphics.hpp>
#include "pad.h"
#include "ball.h"
#include <iostream>
#include <cstdlib>
//using namespace sf;
using namespace std;
int oneMove=1, maxWinX=1300,maxWinY=600;




void padMouse(pad* sh,float m)
{
    sh->movePad(m);
}
void padKeyBoard(pad* sh,int keyp)
{
    sh->movePadKey(keyp);
}
int main()
{
    sf::RenderWindow window(sf::VideoMode(maxWinX,maxWinY), "SFML works!");
    pad gamePad;

    ball gameBall;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close();
            if (event.type==sf::Event::KeyPressed)
                padKeyBoard(&gamePad,event.key.code);
            if  (event.type== sf::Event::MouseMoved)
                padMouse(&gamePad,event.mouseMove.x);
        }
        //-----------------------------------------------------------------------------------------------------------
        gameBall.moveBall(gamePad.posx);
       // cout<<gamePad.posx<<endl;
        window.clear();
        window.draw(gamePad.padShape);
        window.draw(gameBall.ballShape);
        window.display();
    }
    return 0;
}
