#include<iostream>
using namespace std;
bool isprime(int);
void howbad(int);
main()
     {
        int number;
        cout <<"Enter a number:";
        cin >> number;
        howbad(number);
     }
      void howbad(int number) 
      {
        int count=0;
             while(number!=0)
             {
               int modlus=number%2;
               if(modlus==1)
                   count++;
               number=number/2;
             }
               
               if(count%2==0)
                    cout<< "Evil"<<" ";
                  else
                    cout<< "odious"<<" ";
                

               if(isprime(count))
                  cout<<"pernicious"<<" ";
      }
                    
       bool isprime(int number)
     {
       for(int i=2;i<number;i++)
          {
             if(number%i==0)
              return false;
          }
          return true;
     }
        
        








