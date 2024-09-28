#include<iostream>
#include<windows.h>
using namespace std;
void Maze();
void gotoxy(int x,int y);
void PlayerMove(int x ,int y);
main()
{  
   int x=7, y=4; 
   system("cls");
   Maze();
   while(true)
    {
   PlayerMove(x,y);
   y=y+1;
   if(y==12)
    {
    y=3;
     }
   }
   gotoxy(0,13);
} 
 
   void PlayerMove(int x, int y)
  {
   gotoxy(x,y);
   cout<<"p";
   Sleep(500);
   gotoxy(x,y);
   cout<<" ";  
   } 
  void gotoxy(int x,int y)
   {
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
   }

   void Maze()
{
cout <<"############################################"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"#                                          #"<<endl;
cout <<"############################################"<<endl;
}