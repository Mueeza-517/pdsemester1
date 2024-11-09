#include <iostream>
using namespace std;
main()
{
    int array[3];
    int transformation;

    cout << "Enter the number of times even_odd transformation need to be done:";
    cin >> transformation;
    cout << "Enter the array:"<< endl;
    for (int idx = 0; idx < 3; idx++)
    {
        cin >> array[idx];
    }
    int n = 0;
    while (n < transformation)
    {
        for (int idx = 0; idx < 3; idx++)
        {
            if (array[idx] % 2 == 0)
                array[idx] -= 2;
            else
                array[idx] += 2;
        }
        n++;
    }
    for (int idx = 0; idx < 3; idx++)
    {
        cout << array[idx] << " ";
    }
}