#include "snake_header.h"
#include "snake_setup.cpp"
#include "snake_draw.cpp"
#include "snake_logic.cpp"
#include "snake_input.cpp"

int main() //main code
{
    SetUp();
    while(!snake_gameOver)
    {
        Draw();
        Input();
        Logic();
        Sleep(30); //slow down the game
    }
    Sleep(1500);
    cout<<"\nPress h to stop the program\n";
    while(_getch()!='h')
    {

    }

    if(score>s)
    {
        ofstream best_score_o("snake_best_score.txt");
        best_score_o << score << endl;
    }
    return 0;
}
