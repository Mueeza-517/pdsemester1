#include <iostream>
using namespace std;
main()
{
    string alphabat;
    cout << "Enter a string :";
    getline(cin, alphabat);
    for (int i = 0; alphabat[i] != '\0'; i++)
    {
        if ((alphabat[i] == 'a') || (alphabat[i] == 'e') || (alphabat[i] == 'i') || (alphabat[i] == 'o') || (alphabat[i] == 'u') ||
            (alphabat[i] == 'A') || (alphabat[i] == 'E') || (alphabat[i] == 'I') || (alphabat[i] == 'O') || (alphabat[i] == 'U'))
        {
            continue;
        }
        if (alphabat[i] == ' ')
        {
            cout << " ";
            continue;
        }
        cout << alphabat[i];
    }
}