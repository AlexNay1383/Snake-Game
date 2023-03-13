#include "snake_header.h"

void Draw() //printing the map, snake, tail and fruit
{
    system("cls");
    for (int i=0;i<width+2;i++)
    {
        cout<<"#";
    }
    cout<<endl;

    for(int i=0;i<height;i++)
    {
        for(int j=0;j<width;j++)
        {
            if(j==0) cout<<"#";
            if(i==y and j==x) cout<<"O";
            else
            {
                if(j==fruitX and i==fruitY) cout<<"F";
                else
                {
                    bool print = false;
                    for(int k=0;k < nTail;k++)
                    {
                        if(tailX[k]==j and tailY[k]==i and k!=0)
                        {
                            cout<<"o";
                            print = true;
                        }
                    }
                    if(!print) cout<<" ";
                }
            }
            if(j==width-1) cout<<"#";
        }
        cout<<endl;
    }

    for (int i=0;i<width+2;i++)
    {
        cout<<"#";
    }
    cout<<endl;
    cout<<"Score: "<<score<<endl;
    cout<<"Best score: ";
    cout<<s<<endl;
}
