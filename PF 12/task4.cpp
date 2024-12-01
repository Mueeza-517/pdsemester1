#include <iostream>
using namespace std;
void converter(int Cars[][5],int CarsColor, string Color);
main()
{

    const int RowSize = 5;
    const int ColumnSize = 5;
    int CarsColor = 5;
    string Color;
    cout <<"Enter the color (Red, Black, Brown, Blue ,Grey) : ";
    cin >> Color;
    int Cars[RowSize][ColumnSize] = {
        // red 0 , black 1, brown 2, blue 3, gray 4
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
      converter(Cars,CarsColor, Color);
}
void converter(int Cars[][5],int CarsColor, string Color)
{
    int sum = 0;
 for(int i = 0 ; i < CarsColor ; i++)
 {
   if(Color=="Red")
   {
     sum+=Cars[i][0];
   }
    else if(Color=="Black")
   {
     sum+=Cars[i][1];
   }
    else if(Color=="Brown")
   {
     sum+=Cars[i][2];
   }
     else if(Color=="Blue")
   {
     sum+=Cars[i][3];
   }
     else if(Color=="Gray")
   {
     sum+=Cars[i][4];
   }
   else
   {
    cout << "Invalid Color";
   }
}
 cout << "Total number of "<<Color << " Color Cars is : "<<sum;
}