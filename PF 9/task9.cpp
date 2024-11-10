#include <iostream>
using namespace std;
bool canPaywithChange(double change[], double totalDue);
main()
{
    double change[4];
    double totalDue;
    cout << "Enter quarters:";
    cin >> change[0];
    cout << "Enter dimes:";
    cin >> change[1];
    cout << "Enter nickles:";
    cin >> change[2];
    cout << "Enter pennies:";
    cin >> change[3];
    cout << "Enter the total amount due: ";
    cin >> totalDue;
    if (canPaywithChange(change, totalDue))
        cout << "Can you pay the amount ? yes";
    else
    cout << "Can you pay the amount ? No";
}
bool canPaywithChange(double change[], double totalDue)
{
    double total = change[0] * 0.25 + change[1] * 0.10 + change[2] * 0.05 + change[3] * 0.01;
    if (total >= totalDue)
        return true;
    else
        return false;
}
