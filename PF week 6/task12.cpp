#include<iostream>
using namespace std;
float totalIncome(int ,int, string);
main()
 {
   int rows,columns;
   string screening;
   cout <<"Enter the screening type (Premiere/Normal/Discount):";
   cin >>screening;
   cout <<"Enter the number of rows:";
   cin >> rows;
   cout <<"Enter the number of columns:";
   cin >>columns;
   float result=totalIncome(rows,columns, screening);
   cout <<result;
 }
  
   float totalIncome(int rows, int columns, string screening)
  {
     float result;
     if(screening=="Premiere")
     result=rows*columns*12.00;
     if(screening=="Normal")
     result=rows*columns*7.5;
     if(screening=="Discount")
     result=rows*columns*5.00;
     return result;
  }
    
     
  