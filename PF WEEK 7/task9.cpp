#include<iostream>
using namespace std;
int calcualtePrice(int money, int year);
main()
  {
   int money, year;
   cout <<"Enter Money:";
   cin  >> money;
   cout <<"Enter year:";
   cin >> year;
   money=calcualtePrice(money, year);
   if(money>0)
   cout<<"Yes! he will live a carefree life and will have " << money <<" dollers";
   else if(money<0)
   cout <<"He will need "<< abs(money) <<" to survive";

  }
  int calcualtePrice(int money, int year)
  {
   int age=18;
 
   for(int j=1800; j<=year ;j++)
  {
   if(j%2==0)
   {
    money=money-12000;
   }
   else
   {
    money=money-12000 - (50*age);
   }
    age=age+1;
  }
   return money;
}









    