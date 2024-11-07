#include<iostream>
#include<conio.h>
using namespace std;
bool BrickFit(int height, int width ,int depth ,int hole_width, int hole_height);
main()
   {
      int height, width ,depth ,hole_height, hole_width;
      cout<<"Enter the height of the brick:";
      cin >> height;
      cout<<"Enter the width of the brick:";
      cin >> width;
      cout<<"Enter the depth of the brick:";
      cin >> depth;
      cout<<"Enter the width of the hole:";
      cin >> hole_width;
      cout<<"Enter the height of the hole:";
      cin >> hole_height;
      cout << BrickFit(height, width ,depth ,hole_width,hole_height);
  }
     bool BrickFit(int height, int width ,int depth ,int hole_width, int hole_height)
   {
      int Area_1=height*width;
      int Area_2=width*depth;
      int Area_3=height*depth;
      int Hole_Area=hole_width*hole_height;
      if(Area_1==Hole_Area||Area_2==Hole_Area||Area_3==Hole_Area)
      return true;
      else
      return false;
   }