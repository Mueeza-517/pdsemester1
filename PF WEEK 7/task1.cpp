#include<iostream>
using namespace std;
void printTable(int number);
main()
   {
    int number ,result;
    int table = 1;
    cout<<"Enter a number:";
    cin>>number;
    printTable(number);
   }
   void printTable(int number)
   {
    int table = 1, result;
    while(table<=10)
     {
      result=table*number;
      cout <<number << " * " << table << " = " <<result<<endl;
      table=table+1;
      }
    }
   
     
    
