#include<iostream>
using namespace std;
float taxCalculator(char type, float price);
main()
{
 char type;
 float price;
 cout <<"Enter the vehicle type code (M ,E , S, V, T):";
 cin >>type;
 cout <<"Enter the price of vehicle:";
 cin >> price;
 float tax;
 tax= taxCalculator( type, price);
 }
 float taxCalculator( char type,float  price)
  {
   float tax;
   if(type=='M')
    {
     tax=price*6/100;
     float Final_price=price+tax; 
     cout <<"final price of the vehicle of type" <<"M"<<"after adding the tax is " <<Final_price;
    }
    if(type=='E')
    {
     tax=price*8/100;
     float Final_price=price+tax;
     cout <<"final price of the vehicle of type" <<" E " <<"after adding the tax is " <<Final_price;
    }
    if(type=='S')
    {
     tax=price*10/100;
     float Final_price=price+tax;
     cout <<"final price of the vehicle of type" <<" S " <<"after adding the tax is " <<Final_price;
    }
     if(type=='V')
    {
     tax=price*12/100;
     float Final_price=price+tax;
     cout <<"final price of the vehicle of type" <<"V" <<"after adding the tax is " <<Final_price;
    }
     if(type=='T')
    {
     tax=price*15/100;
     float Final_price=price+tax;
     cout <<"final price of the vehicle of type" <<"T" <<"after adding the tax is " <<Final_price;
    }
     return tax;
}
   
  
