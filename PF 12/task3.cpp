#include <iostream>
using namespace std;
void printCars(int Cars[][5], int RowSize);
main()
{
    const int RowSize = 5;
    const int ColumnSize = 5;
    int Cars[RowSize][ColumnSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {17, 12, 16, 0, 2},
        {3, 5, 6, 2, 1}};
    printCars(Cars, RowSize);
}
void printCars(int Cars[][5], int RowSize)
{
    int sum = 0;
 for(int i = 0 ; i < RowSize ; i++)
 {
    sum=sum+Cars[2][i];
 }
 cout << "Total number of Nisan Cars"<<sum;
}