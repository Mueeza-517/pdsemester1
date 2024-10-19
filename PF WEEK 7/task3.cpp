#include<iostream>
using namespace std;
void totalDigit(int number);
main()
  {
   int number , count;
   cout <<"Enter a number:";
   cin >> number;
   totalDigit(number);
  
  }
void totalDigit(int number)
  { 
   
   int count = 0;
   if(number<0)
  {
   number=abs(number);
  }
   if(number==0)
   count=1;
   while(number!=0)
  {
   number=number/10;
   count++;
  }
   cout<<"Total number of digits:" <<count;
  }
   
   