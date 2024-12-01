#include <iostream>
using namespace std;
void printSum(int array[][3] , int RowSize);

main()
{
    int RowSize;
    const int ColumnSize = 3;
    cout << "Enter the RowSize:";
    cin >> RowSize;
    cout <<"Enter the elements of the matrix:"<<endl;
    int array[RowSize][ColumnSize];
    printSum(array , RowSize);
}
void printSum(int array[][3] ,int RowSize)
{
  int Sum = 0;
  for(int i = 0 ; i < RowSize ; i++)
  {
    for (int j = 0 ; j < 3 ; j++)
    {
        cout <<"Enter the elements at poition  ["<<i<<"]["<<j<<"] :"  ;
        cin >> array[i][j];
        Sum+=array[i][j];
    }
  }
  cout <<"The Sum of the elments in the matrix is : " <<Sum;
}