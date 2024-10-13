#include<iostream>
using namespace std;
bool areSameNumber(int,int,int);
main()
 {
   int first_number,second_number,third_number;
   cout <<"Enter first digit:";
   cin >>first_number;
   cout <<"Enter second digit:";
   cin >>second_number;
   cout <<"Enter third digit:";
   cin >>third_number;
   bool result=areSameNumber(first_number,second_number,third_number);
   cout <<result;
 }
   bool areSameNumber(int first_number,int second_number,int third_number)
  {
    
    if(first_number== second_number && second_number== third_number  && third_number== first_number) 
     {
      return 1;
     }
      else
     {
      return 0;
      }
     
    
  }