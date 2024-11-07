#include<iostream>
using namespace std;
int primeNumbers(int number);
bool isprime (int number);
main()
  {
   int number;
   cout << "Enter a number:";
   cin >> number;
   cout << primeNumbers(number); 
  }
 int primeNumbers (int number)   
  {  
     int count = 0;
     for(int j=2; j<number; j++)
       {
         if(isprime(j))
           count++;
       }
       return count;
  }
    
  bool isprime (int number)
  {
    for(int i=2;i<number;i++)
      {
       if(number%i==0)
       return false;
      }
       return true;
  }
  