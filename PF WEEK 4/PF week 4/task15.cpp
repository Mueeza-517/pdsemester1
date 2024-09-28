#include<iostream>
using namespace std;
void dis();
main()
{
 while(true)
 dis();
}
 void dis()
{
  string day;
  cout <<"Enter the day of purchase:";
  cin >> day;
  int amount;
  cout <<"Enter the total purchase amount:";
  cin >> amount;
  if(day=="sunday")
   {
   int d=amount*0.1;
   int discount=amount-d;
   cout <<"payable amount is:"<<discount<<endl;
   }
   if(day!="sunday")
  {
   int b=amount*0.05;
   int disc=amount-b;
   cout <<"amount is:" <<disc<<endl;
  }
}
  
 