#include <iostream>
#include <cmath>
using namespace std;
void package(int array[]);
main()
{
    int array[10];
    cout << "Enter the array to be sorted" << endl;
    for (int idx = 0; idx < 10; idx++)                                                                                                                                                 
    {
        cin >> array[idx];
    }
    package(array);
}
void package(int array[])
{
    for (int idx = 0; idx < 10; idx++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (array[j] > array[j + 1])
                swap(array[j], array[j + 1]);
        }
    }
    cout <<"sorted array(ascending order):";
    for (int idx = 0; idx < 10; idx++)
    {
        cout << array[idx] << " ";
    }
}