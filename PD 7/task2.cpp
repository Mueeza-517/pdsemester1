#include<iostream>
using namespace std;
void diamond(int rows);
main()
  {
   int rows;
   cout <<"Enter the desired number of rows:";
   cin >>rows;
   diamond(rows);
  }
   void diamond(int rows)
  {
    for(int i=1; rows>=i ;rows--)
      {
        for(int j=1; rows>=j ; j++)
         {
            cout <<"*";
         }
          cout <<endl;
     }
}
          
 
   
   
 