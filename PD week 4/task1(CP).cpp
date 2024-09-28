#include<iostream>
using namespace std;
void num(int number1,int number2);
main()
 {
    int number1, number2;
    cout <<"Enter first number:";
    cin >> number1;
    cout <<"Enter second number:";
    cin >>number2;
    num(number1,number2);
 }
 void num(int number1,int number2)
  {
   if(number1==number2)
   {
   cout <<"TRUE";
    } 
   if(number1!=number2)
    {
    cout <<"FALSE";
  }
}