#include<iostream>
using namespace std;
string value(int number,int sum, int remainder);
main()
  {
    int number;
    cout <<"Enter a number:";
    cin >>number;
    int first_digit = number%100;
    int second_digit = (number%100)/10;
    int third_digit =  number%10;
    int sum= first_digit+second_digit+third_digit;
    sum=sum%2;
    int remainder=number%2;
    string result=value(number, sum, remainder);
    cout <<"Result is:"<<result;
  }
    string value(int number,int sum, int remainder)
    { 
       string result; 
       if(sum==remainder)
       {
       result="true";
       }
      else 
       {
       result="False";
       }
      return result;
 }
    
  