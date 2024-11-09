#include <iostream>
using namespace std;
main()
{
    string name;
    int quantity;
    string fruit[4];
    fruit[0] = "peach";
    fruit[1] = "apple";
    fruit[2] = "gauva";
    fruit[3] = "watermelon";
    int price[4] = {60, 70, 40, 30};
    cout << "Enter the name of the fruit(peach,apple,gauva,melon):";
    cin >> name;
    cout << "Enter the quantity of the fruit in Kg's:";
    cin >> quantity;
    for (int idx = 0; idx < 4; idx++)
    {
        if (name == fruit[idx])
            cout << "The price of the " << name << " is " << quantity * price[idx] << " RS";
    }
}