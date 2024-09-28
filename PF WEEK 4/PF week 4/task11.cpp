#include<iostream>
using namespace std;
void dis();
main()
{
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
   cout <<"payable amount is:"<<discount;
   }
   if(day!="sunday")
  {
   cout <<"amount is:" <<amount;
  }
}
  
 