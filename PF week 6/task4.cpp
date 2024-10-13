#include<iostream>
using namespace std;
int findGreatest(int first_digit, int second_digit, int third_digit);
main()
  {
    int first_digit, second_digit,third_digit;
    cout <<"Enter first digit:";
    cin >>first_digit;
    cout <<"Enter second digit:";
    cin >>second_digit;
    cout <<"Enter third digit:";
    cin >>third_digit;
    int large=findGreatest(first_digit, second_digit, third_digit);
    cout <<"The largest number is:" <<large;
 }
    int findGreatest(int first_digit,int second_digit,int third_digit)
  {
    int large=first_digit;
    if(large<second_digit)
           large=second_digit;
     if(large<third_digit)
            large=third_digit;
        return large;
   }
