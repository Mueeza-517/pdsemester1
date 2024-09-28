#include<iostream>
using namespace std;
void score();
main()
  {
  score();
  }
 void score()
{
 int marks;
 cout <<"Enter your marks:";
 cin >> marks;
 if(marks>50)
  {
  cout <<"pass";
  }
 if(marks<=50)
  {
  cout <<"fail";
  }
}
 
 