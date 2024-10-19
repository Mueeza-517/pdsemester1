#include<iostream>
using namespace std;
int digitSum(int digit);
main()
   {
   int digit ;
   cout <<"Enter a number:";
   cin >> digit;
   int sum=digitSum(digit); 
   cout <<"Sum of digit:" <<sum;
   }
   int digitSum(int digit)
   {
     int sum=0;
     if(digit<0)
      digit=abs(digit);
      while(digit!=0)
     {
      sum=sum+(digit%10);
      digit=digit/10;
     }
    return sum;
 }