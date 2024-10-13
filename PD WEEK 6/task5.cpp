#include<iostream>
using namespace std;
float calculateFruitPrice (string fruit, string day ,double quantity);
main()
  {
   string fruit, day;
   double quantity;
   cout<<"Enter the fruit name:";
   cin >> fruit;
   cout<<"Enter the day of week (e.g., Monday ,Sunday):";
   cin>> day;
   cout<<"Enter the quantity:";
   cin >>quantity;
   float output= calculateFruitPrice (fruit, day ,quantity);
   cout <<"The total price is:"<<output;
}
  float calculateFruitPrice (string fruit, string day ,double quantity)
 {
    float output;
    if(day=="Sunday"||day=="Saturday") 
        {
        if(fruit=="banana")
           output=2.70*quantity;
        if(fruit=="apple")
           output=1.25*quantity;
        if(fruit=="orange")
           output=0.90*quantity;
        if(fruit=="grapefruit")
           output=1.60*quantity;
         if(fruit=="kiwi")
           output=3.00*quantity;
        if(fruit=="pineapple")
           output=5.60*quantity;
        if(fruit=="grapes")
           output=4.20*quantity;
       }
    else
       {
        if(fruit=="banana")
           output=2.50*quantity;
        if(fruit=="apple")
           output=1.20*quantity;
        if(fruit=="orange")
           output=0.85*quantity;
        if(fruit=="grapefruit")
           output=1.45*quantity;
         if(fruit=="kiwi")
           output=2.70*quantity;
        if(fruit=="pineapple")
           output=5.50*quantity;
        if(fruit=="grapes")
           output=3.85*quantity;
     }
      return output;
   }
   
         
    
   