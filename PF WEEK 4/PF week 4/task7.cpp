#include<iostream>
using namespace std;
void add(float num1,float num2);
void sub(float num1,float num2);
void mul(float num1,float num2);
void divi(float num1, float num2);
main()
{ 
 float num1,num2;
 char op;
 cout<<" Enter first number:";
 cin >> num1;
 cout <<"Enter second number:";
 cin >> num2;
 cout<<" Enter the operator (+ ,- ,* ,/):";
 cin >>op;
 if(op =='+')
 {
  add(num1,num2);
 }
  if(op =='-')
 {
  sub(num1,num2);
 }
  if(op =='*')
 {
  mul(num1,num2);
 }
   if(op =='/')
 {
  divi(num1,num2);
 }
}
 void add(float num1,float num2)
{
 float sum=num1+num2;
 cout <<"sum is :" <<sum;
}
 void sub(float num1,float num2)
{
 float sub=num1-num2;
 cout <<" sub is :"<<sub;
}
 void mul(float num1,float num2)
{
 float mul=num1*num2;
 cout <<" mul is :"<<mul;
}
 void divi(float num1,float num2)
{
  float divi=num1/num2;
 cout <<"divi is:"<<divi;
}


 
  