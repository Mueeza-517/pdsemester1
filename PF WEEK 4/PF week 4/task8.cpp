#include<iostream>
using namespace std;
void vote();
main()
{
 vote();
}
void vote()
{ 
 int age;
 cout <<"Enter your age:";
 cin >> age;
 if(age>=18)
  {
 cout <<" you are eligible to vote";
  }
 if(age<=18)
 { 
cout <<" you are not eligible to vote";
 }
}