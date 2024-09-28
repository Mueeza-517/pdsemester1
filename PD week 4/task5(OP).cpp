#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
   int x=52,y=10;
    gotoxy(x,y);
    cout<<"MUEEZA AKBAR";
  }
   void gotoxy(int x,int y)
 {
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }
