#include<iostream>
using namespace std;
int frequencyChecker(int number,int digit);
main()
  {
   int number , digit ;
   cout <<"Enter a number:";
   cin >> number;
   cout <<"Enter a digit to check:";
   cin >> digit;
   int count = frequencyChecker(number,digit);
   cout <<"frequency :" <<count;
   }
   int frequencyChecker(int number, int digit)
  {
    int count=0;
    if(number<0)
     number=abs(number);
     while(number!=0)
   {
     int mode=number%10;
     number=number/10;
     if(mode==digit)
      count=count+1;
    }
   return count;
}
 

