#include<iostream>
#include<math.h>
using namespace std;
void height(float base ,float elevation);
main()
{
  float base,elevation;
  cout <<"Enter the diatance form the base of the tree(in feet):";
  cin >> base;
  cout <<"Enter the angle of elevation (in degree):";
  cin >> elevation;
  elevation=elevation*0.01745;
  height(base,elevation);
}
   void height(float base, float elevation)
   {
     float c ,a;
     c=tan(elevation);
     a= base*c;
     cout <<"The height of the tree is:" <<a <<" feet";
   }
     
     
 

