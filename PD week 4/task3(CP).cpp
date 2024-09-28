#include<iostream>
using namespace std;
void con();
main()
{
  while(true)
  con();
}
 void con()
 {
     float c;
     string b;
     cout <<"Enter the country name:";
     cin >> b;
     float price;
     cout <<"Enter the ticket price:";
     cin >> price;
     if(b=="pakistan")
   {
     c=0.05*price;
     c=price-c;
     cout <<"price is "<<c <<endl;
   }
    if(b=="ireland")
   {
     c=0.1*price;
     c=price-c;
     cout <<"price is "<<c <<endl;
   }
    if(b=="india")
   {
     c=0.2*price;
     c=price-c;
     cout <<"price is "<<c <<endl;
   }
    if(b=="england")
   {
     c=0.3*price;
     c=price-c;
     cout <<"price is "<<c <<endl;
   }
    if(b=="canada")
   {
    c=0.45*price;
    c=price-c;
    cout <<"price is "<<c <<endl;
   }
}

     

     