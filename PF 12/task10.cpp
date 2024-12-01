#include <iostream>
using namespace std;
void IdenticalRows(int array[][3], int RowSize);

main()
{
  int RowSize;
  const int ColumnSize = 3;
  cout << "Enter the RowSize:";
  cin >> RowSize;
  cout << "Enter the elements of the matrix:" << endl;
  int array[RowSize][ColumnSize];
  IdenticalRows(array, RowSize);
}
void IdenticalRows(int array[][3], int RowSize)
{
  {
    for (int i = 0; i < RowSize; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << "Enter the elements at poition  [" << i << "][" << j << "] : ";
        cin >> array[i][j];
      }
    }
  }
  int max = 0;
  cout << "Original Matrix :" << endl;
  {
    for (int i = 0; i < RowSize; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout << array[i][j] << " ";
      }
      cout << endl;
    }
  }
  int Identicalrows = 0;
  bool identical = true;
  for (int i = 0; i < RowSize - 1; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (array[i][j] != array[i + 1][j])
      {
        identical = false;
        break;
      }
    }
  }
  if (identical)
  {
    Identicalrows++;
  }
  cout << "pairs : " << Identicalrows;
}
