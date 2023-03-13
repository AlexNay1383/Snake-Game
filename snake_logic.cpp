#include "snake_header.h"

void Logic() //changes directions of the head, makes you die if you hit yourself or a wall, makes you eat fruit
{
    int prevX = width + 2;
    int prevY = height + 2;
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for(int i=0;i<nTail;i++)
    {
        prev2X=tailX[i];
        prev2Y=tailY[i];
        tailX[i]=prevX;
        tailY[i]=prevY;
        prevX=prev2X;
        prevY=prev2Y;
    }
    switch (dir)
    {
        case UP:
            y--;
            break;
        case DOWN:
            y++;
            break;
        case LEFT:
            x--;
            break;
        case RIGHT:
            x++;
            break;
    }
    if(wallkill==true)
    {
        if(x >= width or x < 0 or y >= height or y < 0) snake_gameOver = true;
    }
    else
    {
        if(x<0) x=width-1;
        if(x>=width) x=0;
        if(y<0) y=height-1;
        if(y>=height) y=0;
    }
    for(int i=0;i<nTail;i++)
    {
        if(tailX[i]==x and tailY[i]==y) snake_gameOver = true;
    }
    if(x == fruitX and y == fruitY)
    {
        nTail++;
        srand(time(0));
        fruitX=1+(rand()%(width-2));
        fruitY=1+(rand()%(height-2));
        for(int i=0;i<nTail;i++)
        {
            if(fruitX==tailX[i] and fruitY==tailY[i])
            {
                srand(time(0));
                fruitX=1+(rand()%(width-2));
                fruitY=1+(rand()%(height-2));
            }
        }
        score+=10;
    }
}
