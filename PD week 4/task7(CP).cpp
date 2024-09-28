#include<iostream>
using namespace std;
void flowershop(float redRose,float whiteRose,float tulip,float price1,float price2);
main()
  {
    float redRose, whiteRose, tulip, price1 , price2;
    cout <<"Enter the number of red roses:";
    cin >>redRose;
    cout <<"Enter the number of white roses:";
    cin >> whiteRose;
    cout <<"Enter the number of tulip:";
    cin >>tulip;
    redRose=redRose*2.00;
    whiteRose=whiteRose*4.10;
    tulip=tulip*2.50;
    price1=redRose+whiteRose+tulip;
    flowershop(redRose,whiteRose,tulip,price1,price2);
 }
   void flowershop(float redRose,float whiteRose,float tulip,float price1,float price2)
  {
    if(price1>200)
   { 
     price2=price1*0.2;
     price2=price1-price2;
     cout <<"price after discount:" <<price2<<endl;
   }
    if(price1<200)
    {
     cout <<"No discount applied"<<endl;
    }
   cout <<"original price:" <<price1<<endl;
  
   }
     
    
    
   