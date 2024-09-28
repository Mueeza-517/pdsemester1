#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main()
{
   int x=52,y=10;
    gotoxy(x,y);
    cout<<"H"<<endl;
    gotoxy(x,y+3);
    cout<<"A"<<endl;
    gotoxy(x,y+6);
    cout<<"S"<<endl;
    gotoxy(x,y+9);
    cout<<"S"<<endl;
    gotoxy(x,y+12);
    cout<<"A"<<endl;
    gotoxy(x,y+15);
    cout<<"N"<<endl;
  }
   void gotoxy(int x,int y)
 {
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
 }
