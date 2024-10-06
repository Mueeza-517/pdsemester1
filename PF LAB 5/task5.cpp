#include<iostream>
#include<math.h>
using namespace std;
float det(float a,float b,float c);
main()
 { 
   float a,b,c;
   cout <<"Enter the value of a:";
   cin >> a;
   cout <<"Enter the value of b:";
   cin >> b;
   cout <<"Enter the value of c:";
   cin >>c;
   det(a,b,c);
 }
float det(float a,float b,float c)
   {
    float dis=(b*b)-(4*a*c);
    if(dis==0)
    {
     float root1;
     root1= -b/(2*a);
     cout <<"Solution:x= "<<root1;
   
    }
    if(dis>0)
    {
     float dis=(b*b)-(4*a*c);
     float root1,root2;
     root1=(-b+sqrt(dis))/(2*a); 
     root2=(-b-sqrt(dis))/(2*a);
     cout<<"Solution:x=" <<root1 <<" and " <<root2;
    }
    if(dis<0)
    {
      float dis=(b*b)-(4*a*c);
      float real = -b/(2*a);
      float imaginary = (sqrt(-(b*b)-(4*a*c)))/(2*a);
      cout <<"Complex Solution:x = " << real<<"+" << imaginary << "i";
      cout <<"Complex Solution:x = " << real<<"-" << imaginary << "i";
    }
}
       
     
     
       
