#include<iostream>
using namespace std;
void upper_diamond(int);
void lower_diamond(int);

main()
   {
     int rows;
     cout <<"Enter desired number of rows:";
     cin >> rows;
     upper_diamond(rows/2);
     lower_diamond(rows/2);
   }
    void upper_diamond(int r)
   {
       for(int i=r; i>0 ;i--)
       {
        for(int j=1; j<=r; j++)
         {
           if(j>=i)
           cout <<"*";
           else
           cout <<" ";
         }
     cout<< endl;
      }
 }
      void lower_diamond(int r)
  {
    for(int i=0; i<r; i++)
     {
       for(int j=0; j<r ;j++)
        {
           if(j>=i)
           cout <<"*";
           else
           cout <<" ";
        }
      cout<<endl;
     }
 }