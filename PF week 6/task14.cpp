#include<iostream>
using namespace std;
string calculateCost( float budget ,string category ,int numpeople);
main()
   {
      float budget;
      string category;
      int numpeople;
      cout <<"Enter the budget:";
      cin >> budget;
      cout <<"Enter the category(VIP/Normal):";
      cin >> category;
      cout <<"Enter the number of people in the group:";
      cin >> numpeople;
      cout <<calculateCost(  budget , category , numpeople);
   } 
      string calculateCost( float budget ,string category ,int numpeople)
   {
     float budget_2 ,ticketprice=249.99 , total; 
     if(numpeople>=50)
        budget_2=0.25;
     else if(numpeople>=25)
       budget_2=0.40;
     else if(numpeople>=10)
      budget_2=0.50;
     else if(numpeople>=5)
        budget_2=0.60;
     else if(numpeople>=1)
       budget_2=0.75;
     else
          budget_2=0;

     if(category=="VIP")
        ticketprice=499.99;
     else
        ticketprice=249.99;
     
      total= (numpeople*ticketprice) + (budget*budget_2);
         if(total>budget)
     {
       float result =total-budget;
       return "No  ! enough money you need  " + to_string(result) + " leva left";
     }
      float result=budget-total;
      return "YES ! you have " + to_string(result) + " leva left";
    
}
     
    
     
   