#include<iostream>
using namespace std;
int triangular_number(int number,int triangle);
main()
 {
   int number , triangle;
   cout <<"Enter number of triangle:";
   cin >> number;
   triangle=triangular_number(number , triangle);
   cout << "Dots in the triangle:" << triangle;
 }
 int triangular_number(int number , int triangle)
 {
   for(int i=1; i<=number; i++)
      {
      triangle=triangle+i;
      }
    return triangle;
 }
   
        