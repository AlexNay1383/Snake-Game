#include "snake_header.h"

void SetUp() //Sets up the variables
{
    snake_gameOver = false;
    dir = STOP;
    x=width/2;
    y=height/2;
    srand(time(0));
    fruitX=1+(rand()%(width-2));
    fruitY=1+(rand()%(height-2));
    score = 0;
    nTail = 1;
    wallkill = true;
    best_score_i >> s;
}
