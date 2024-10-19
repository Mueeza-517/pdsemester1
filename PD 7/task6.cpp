#include<iostream>
using namespace std;
bool print_prime(int number);
main()
   {
     int number;  
     cout <<"Enter a number:";
     cin >> number;
     cout <<print_prime(number);
   }
   bool print_prime(int number)
   {
     int count=0;
     for(int i=1;i<=number;i++)
      {
       
        if(number%i==0)
        count=count+1;
     }
         
         
          if(count>2)
          return false;
          else
          return true;
          
    }
        