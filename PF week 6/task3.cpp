#include<iostream>
using namespace std;
float perimeter(float,char);

main()
 {
  
   char shape; float side;
   cout <<"Enter the shape(s for square, c for circle, t for triangle , h for hexagon):";
   cin >> shape;
   cout <<"Enter the value:";
   cin >> side;
   float result = perimeter(side,shape);
   cout <<"The perimeter is:" <<result ;
 }
 float perimeter(float side,char shape)
 { 
    float result;
    if(shape=='s')
     {
      result= 4*side;
     }
      if(shape=='c')
     {
      result= 6.28*side;
     }
      if(shape=='t')
     {
      result= 3*side;
     }
      if(shape=='h')
     {
      result= 6*side;
     }
   return result;
}

      
      
      
  