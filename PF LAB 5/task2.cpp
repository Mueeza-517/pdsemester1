#include<iostream>
#include<math.h>
using namespace std;
void square_root(float number1,float number2);
main()
{
   float number1,number2;
   cout <<"Enter the base number:";
   cin >> number1;
   cout <<"Enter exponent number:";
   cin >> number2;
   square_root(number1,number2);
}
  void square_root(float number1,float number2)
   {
    float power;
    power=pow(number1,number2);
    cout<< number1 <<" raised to the power  " <<number2 <<" is: " <<power;
    }