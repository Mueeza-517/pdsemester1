#include<iostream>
using namespace std;
void printStars(int rowSize);
main()
 {
   int rowSize;
   cout <<"Enter desired number of rows:";
   cin >> rowSize;
   printStars(rowSize);
 }
   void printStars(int rowSize)
 {
   for(int row=1; row<=rowSize;row++)
     {
       for(int column=1; column<=row; column++)
            {
                cout <<"*";
            }
            cout <<endl;
      }
 }