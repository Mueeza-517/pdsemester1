#include<iostream>
using namespace std;
float discount(string day, string month, float amount);
main()
  {
    string day,month;
    float amount;
    cout <<"Enter Purchase Day:";
    cin >>day;
    cout<<"Enter purchase  Month:";
    cin >>month;
    cout <<"Enter purchase amount:";
    cin >>amount;
    float payable_amount=discount(day,month,amount);
    cout <<"Payable amount after discount:" <<payable_amount;
  }
   float discount(string day, string month, float amount)
    {
      float payable_amount;
      if(day=="sunday" && month=="october")
      {
      payable_amount=amount-(amount*0.1);
      }
      else if(day=="sunday")
      {
      payable_amount=amount-(amount*0.05);
      }
      else
      {  
         payable_amount=amount;
      }
     return payable_amount;
   }
 
        
       
       
       