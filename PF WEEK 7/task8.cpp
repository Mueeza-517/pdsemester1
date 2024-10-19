#include<iostream>
using namespace std;
int calculateMoney(int age, int price_1,int price_2);
main()
 {
   int age, price_1,price_2;
   cout <<"Enter lily's age:";
   cin >>age;
   cout <<"Enter the price of the washing machine:";
   cin >> price_1;
   cout <<"Enter the unit price of each toy:";
   cin >> price_2;
   cout << calculateMoney( age, price_1, price_2);
 }
 int calculateMoney(int age, int price_1,int price_2)
 {
   int  Birthday_amount = 0,number_of_toys =0;
   for(int j=1;j<=age;j++)
   if(j%2==0)
   {
    Birthday_amount=Birthday_amount+(10*(j/2));
    Birthday_amount=Birthday_amount-1;
   }
   else
   number_of_toys=number_of_toys+1;
   
   int Total_money=Birthday_amount+(number_of_toys*price_2);
   if(Total_money>price_1)
   {
    cout << "YES! remaining money after the purchase is :";
    return Total_money-price_1;
   }
   else
   {
    cout << "NO! in Sufficient amount :";
    return price_1-Total_money;
    }
}


    
