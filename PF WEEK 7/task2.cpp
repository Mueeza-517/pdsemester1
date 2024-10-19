#include<iostream>
using namespace std;
void generateFibonacci(int length);
main()
  {
   int length ;
   cout <<"Enter the lenght of the Fibonacci series:";
   cin >> length;
   generateFibonacci(length);
  }
void generateFibonacci(int length)
  {
   int n1=0;
   int n2=1;
   int next;
   for(int i=1;length>i;i++)
    {
     next=n1;
     cout <<next << " " ;
     next=n1+n2;
     if(length==i)
     cout<<next <<" ";
     n1=n2;
     n2=next;
    }
   cout <<next << " " ;
}
   
   
   