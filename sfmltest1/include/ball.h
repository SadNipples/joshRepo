#ifndef BALL_H
#define BALL_H
#include <SFML/Graphics.hpp>
#include <math.h>


class ball
{
    public:
        float posx;
        float posy;
        float diameter;
        float r;
        float velocityX;
        float velocityY;
        float slope;
        int angle;
        int direction;

        sf::CircleShape ballShape;

        void moveBall(float x);
        bool ballCollide(float x);

        ball();

    protected:

    private:
};

#endif // BALL_H
