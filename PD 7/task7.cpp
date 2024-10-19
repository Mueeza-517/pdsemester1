#include<iostream>
using namespace std;
int primorial(int number);
bool print_prime(int number);
main()
 {
    int number;
    cout <<"Enter a number:";
    cin >> number;
    cout << primorial(number);
 }
      int primorial(int number)
  {
      int result=1, i=0 , num=1;
      while(i<=number)
       {
        if(print_prime(num))
         {
          result=result*num;
          i++;
         }
         num++; 
       }
    return result;
 }
   bool print_prime(int num)
   {
     int count=0;
     for(int i=1;i<=num;i++)
      {
        if(num%i==0)
        count=count+1;
      }
          if(count>2)
          return false;
          else
          return true;
  }
       
      
    
    