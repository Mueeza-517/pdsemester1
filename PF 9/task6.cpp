#include <iostream>
using namespace std;
int findlargestnumber(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
main()
{
    int size;
    cout << "Enter the number of elements:";
    cin >> size;
    if (size <= 0)
    {
        cout << "Invalid input";
    }
    else
    {
        int arr[size];
        cout << "Enter " << size << " numbers , one per line:" << endl;
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        cout << "The largest number entered is:" << findlargestnumber(arr, size);
       }
}
    
