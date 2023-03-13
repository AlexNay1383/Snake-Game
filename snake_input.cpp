#include "snake_header.h"

void Input() //Keyboard inputs
{
    if(_kbhit())
    {
        switch (_getch())
        {
            case 'w':
                if(dir!=DOWN)dir = UP;
                break;
            case 'a':
                if(dir!=RIGHT)dir = LEFT;
                break;
            case 's':
                if(dir!=UP)dir = DOWN;
                break;
            case 'd':
                if(dir!=LEFT)dir = RIGHT;
                break;
            case 'x':
                snake_gameOver = true;
                break;
            case 'b':
                wallkill = false;
                break;
            case 'n':
                wallkill = true;
                break;
            default:
                break;
        }
    }
}
