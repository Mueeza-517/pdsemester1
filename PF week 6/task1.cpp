#include<iostream>
using namespace std;
string output(int first_number,int second_number);
main()
 {
   int first_number, second_number;
   cout <<"Enter first number:";
   cin >> first_number;
   cout <<"Enter second number:";
   cin >> second_number;
   string result= output(first_number, second_number);
   cout <<"answer is :" <<result;
 }
  string output(int first_number,int second_number)
   {
    string result;
    if(first_number>second_number)
    {
    result ="TRUE";
    }
    else
    {
       result= "FALSE";
    } 
    return result;
  }
  
   
    
  
   







