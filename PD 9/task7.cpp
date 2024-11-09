#include <iostream>
using namespace std;
main()
{
    string S1, S2;
    int count = 0;
    cout << "Enter first string :";
    cin >> S1;
    cout << "Enter second string :";
    cin >> S2;
    for (int x = 0; S1[x] != '\0'; x++)
    {
        for (int y = 0; S2[y] != '\0'; y++)
            if (S1[x] == S2[y])
            {
                count++;
                S2[y]= ' ';
                break;
            }
    }
    cout << "string has " << count << " common characters";
}