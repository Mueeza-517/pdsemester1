#include<iostream>
using namespace std;
main()
{
int number;
cout <<"enter a 4-digit number:";
cin >>number;
int number2;//4
number2=number%10;
int number3;
number3=number/10;//123
int b;
b=number3%10;
int number4;
number4=b/10;
int c;
int number5;
c=b%10;
number5=c/10;
int e;
e=number2+b+c+number5;
cout <<"sum of the numbers is:" <<e;
}

