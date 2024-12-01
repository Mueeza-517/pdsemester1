#include <iostream>
using namespace std;
int LargestColumnFirst(int array[][5], int RowSize);

main()
{
  int RowSize ,LargestColumn;
  const int ColumnSize = 5;
  cout << "Enter the RowSize:";
  cin >> RowSize;
  cout << "Enter the elements of the matrix:" << endl;
  int array[RowSize][ColumnSize];
  
  {
    for (int i = 0; i < RowSize; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << "Enter the elements at poition  [" << i << "][" << j << "] : ";
        cin >> array[i][j];
      }
    }
  }
  cout << "Original Matrix :" << endl;
  {
    for (int i = 0; i < RowSize; i++)
    {
      for (int j = 0; j < 5; j++)
      {
        cout << array[i][j] << " ";
      }
      cout << endl;
    }
  }
  LargestColumn = LargestColumnFirst(array, RowSize);
  {
    int temp ;
    for(int i = 0 ; i < RowSize ; i++)
    {
     temp = array[i][0];
     array[i][0] = array[i][LargestColumn];
     array[i][LargestColumn]=temp;
   }
  }
  for( int i = 0 ; i < RowSize ; i++)
  {
    for(int j = 0 ;j < 5 ; j++)
    {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}
  int LargestColumnFirst(int array[][5], int RowSize)
  {
    int  Sum = 0 , max= -10;
    int LargestColumn;
    cout << endl;
    cout << "Matrix after largest column moved to the first :" << endl;
    {
      for (int i = 0; i < 5; i++)
      {

        Sum = 0;
        for (int j = 0; j < RowSize; j++)
        {
          Sum += array[j][i];
        }
        if (max < Sum)
        {
          max = Sum;
          LargestColumn = i;
        }
      }
    }
    return LargestColumn;
  }
