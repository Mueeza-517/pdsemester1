#include <iostream>
using namespace std;
void Paticularletter(int length, int array[]);
main()
{
    int length;
    cout << "Enter how many words you want to enter:";
    cin >> length;
    int array[length];
    for (int idx = 0; idx < length; idx++)
    {
        cin >> array[idx];
    }
    Paticularletter(length, array);
}
void Paticularletter(int length, int array[])
{
    int count = 0;
    for (int idx = 0; idx < length - 2; idx++)
    {
    if ((array[idx + 1] > array[idx]) && (array[idx + 1] > array[idx + 2]))
        {
            cout << array[idx + 1];
            count ++;
            cout << ",";
        }      
    }
     if(count==0)
        {
            cout <<"No peak found";
        }
}