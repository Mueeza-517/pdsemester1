#include<iostream>
using namespace std;
string num(int number);
main()
 {
  int number;
  cout <<"Enter a five_digit number:";
  cin >> number;
  string output;
  output=num( number);
  cout << output;
 }
  string num(int number)
  {
   string output;
   int number1;
   number1=number%10000;
   int num1=number/10000;
   int number2;
   number2=number1%1000;
   int num2=number1/1000;
   int number3=number2%100;
   int num3=number2/100;
   int number4=number3%10;
   int num4=number3/10;
   int sum=num1+num2+num3+number4+num4;
   if(sum%2==1)
   {
   output="oddish";
   }
   if(sum%2!=1)
   {
   output="evenish";
   }
   return output;
}