#include <iostream>
using namespace std;
bool isSpecialArray(int arr[], int size);
main()
{
    int size;
    cout << "Enter the size of the array:";
    cin >> size;
    cout << "Enter " << size << " elements of the array:" << endl;
    int arr[size];
    for (int idx = 0; idx < size; idx++)
    {
        cin >> arr[idx];
    }
    if (isSpecialArray(arr, size))
        cout << "Array is special";
    else
        cout << "Array is not special";
}
bool isSpecialArray(int arr[], int size)
{

    int count = 0;
    for (int idx = 0; idx < size; idx = idx + 2)
    {
        if (arr[idx] % 2 == 0)
            count++;
    }
    for (int idx = 1; idx < size; idx = idx + 2)
    {
        if (arr[idx] % 2 != 0)
            count++;
    }
    if (count == size)
        return true;
    else
        return false;
}
