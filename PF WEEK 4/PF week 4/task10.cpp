#include<iostream>
using namespace std;
void num();
main()
{
 num();
}
 void num()
{
 int number;
 cout <<"Enter the number:";
 cin >> number;
 int rem=number%2;
 if(rem==1)
  {
  cout <<"Number is odd:";
  }
  if(rem==0)
  {
  cout<<"Number is even:";
  }
}
 
 
 