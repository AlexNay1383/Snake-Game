#ifndef SNAKE_MFC
#define SNAKE_MFC

#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <windows.h>

using namespace std;


bool snake_gameOver = false; //checks if the game should be over
const int width = 40; //width of the map
const int height = 20; //height of the map
int x, y, fruitX, fruitY, score; //coordinate system
int tailX[801], tailY[801];
int nTail;
bool wallkill = true;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN}; //shows direction of head
eDirection dir;
int s;

ifstream best_score_i("snake_best_score.txt");


void SetUp();

void Draw();

void Logic();

void Input();
#endif
