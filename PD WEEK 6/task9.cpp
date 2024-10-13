#include<iostream>
using namespace std;
string checkPointPosition(int h, int x,int y);
main()
   { 
     int h, x, y;
     cout <<"Enter height:";
     cin >> h;
     cout <<"Enter x coordinate";
     cin >> x;
     cout <<"Enter y coordinates";
     cin >>y;
     cout << checkPointPosition(h, x, y);
  }
    string checkPointPosition(int h, int x,int y)
   {
     string result;
     result = "outside";
     if(((h*4 >=y  && 0 <=y ) && ( h<=x && h*2>=x)) || ((x>=0 && x <=h*3 ) && (y >=0 && y <=h )))
        {
           result= "inside";
          if((x*y == 6*h*x ) || (x*y == 2*h*x) || (x*y == 5*h*x) || (x*y == 3*h*x) || (x*y == x*4*h ) || ( x*y  == 5*h*x) || (x*y == h*x))
            result = "border";
     }
  return result;
  }
    




     
   