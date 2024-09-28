#include<iostream>
using namespace std;
void posi(int position1,int position2);
main()
{
 int position1;
 cout <<"Enter your position:";
 cin >> position1;
 int position2;
 cout <<"Enter your friend's position:";
 cin >> position2;
 posi(position1,position2);
 }
   void posi(int position1,int position2)
  {
   if(position1-position2<=6)
   {
     cout<<"true";
    }
   if(position1-position2>6)
   {
    cout <<"false";
   }
}

 