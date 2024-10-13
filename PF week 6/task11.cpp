#include<iostream>
using namespace std;
string checkSpeed(float);
main()
  {
   float speed;
   cout <<"Enter the speed:";
   cin >>speed;
   string output= checkSpeed(speed);
   cout <<"The speed is :"<<output;
  }
   string checkSpeed(float speed )
   {
    
    string output;
    if(speed<=10)
       output="slow";
    else if(speed>10 && speed<=50)
       output="average";
    else if(speed>50 && speed<=150)
       output="fast";
    else if(speed>150 && speed<=1000)
       output="ultra fast";
    else
        output="extremely fast";
    return output;
   }
    
     
      
    
      
    
   