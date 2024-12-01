#include <iostream>
using namespace std;

void IdenticalRows(int array[][3], int RowSize);

int main()
{
    int RowSize;
    const int ColumnSize = 3;
    cout << "Enter the RowSize: ";
    cin >> RowSize;
    cout << "Enter the elements of the matrix:" << endl;
    int array[RowSize][ColumnSize];
    IdenticalRows(array, RowSize);
}

void IdenticalRows(int array[][3], int RowSize)
{
    // Input the matrix elements
    for (int i = 0; i < RowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the element at position [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < RowSize; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }

    // Check for identical rows
    int count = 0;
    for (int i = 0; i < RowSize; i++) 
    {
        for (int j = i + 1; j < RowSize; j++) // Compare rows i and j where j > i
        {
            bool identical = true; // Flag to check if the rows are identical
            for (int k = 0; k < 3; k++) // Compare each element of the rows
            {
                if (array[i][k] != array[j][k]) 
                {
                    identical = false;
                    break;
                }
            }
            if (identical)
            {
                
                count++; // Increment count if rows are identical
            }
        }
    }

    // Output the result
    cout << "Number of identical row pairs: " << count << endl;
}
