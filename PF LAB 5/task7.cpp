#include<iostream>
using namespace std;
bool num(int number);
main()
 {
  int number;
  cout <<"Enter a three digit number:";
  cin >> number;
  if(num(number)==true)
  {
   cout<<"The number is symmetrical";
  }
   if(num(number)==false)
   {
   cout<<"The number is not symmetrical";
  }

}
  bool num(int number)
 {
  int number1;
  number1=number/100;
  int number2;
  number2=number%100;
  int number3;
  number3=number2%10; 
  if(number1==number3)
   {
     return true;
   }
  if(number1!=number3)
   {
    return false;
   }
 
}
  