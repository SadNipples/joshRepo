#ifndef PAD_H
#define PAD_H
#include <SFML/Graphics.hpp>



class pad
{
    public:
        //int sizex;
        //int sizey;
        float posx;
        float posy;

        //int oneMove;
        //int maxWinX;
        //int maxWinY;
        sf::RectangleShape padShape;
        pad();
        void movePadKey(int x);
        void movePad(float x);

    protected:

    private:
};

#endif // PAD_H
