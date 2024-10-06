#include<iostream>
#include<math.h>
using namespace std;
void min_value(int number1,int number2);
main()
{
   int number1,number2;
   cout <<"Enter the first number:";
   cin >> number1;
   cout <<"Enter second number:";
   cin >> number2;
   min_value(number1,number2);
}
  void min_value(int number1,int number2)
   {
    int minimum;
    minimum=min(number1,number2);
    cout <<"The minimum of the  " <<number1 <<" and " <<number2 <<" is: " <<minimum;
    }

  