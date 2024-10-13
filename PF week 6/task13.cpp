#include <iostream>
using namespace std;
float lowestPrice(int, string);
main()
{
    int n;
    string period;

    cout << "Enter the number of kilometers: ";
    cin >> n;

    cout << "Enter the period of day (day/night) : ";
    cin >> period;

    cout << "Lowest price for " << n << " kilometers is " << lowestPrice(n, period) << " EUR";
}

float lowestPrice(int n, string period)
{
    float taxiPrice = 0.7;
    float busPrice = 0;
    float trainPrice = 0;

    if (n >= 100)
    {
        trainPrice = n * 0.06;
        return trainPrice;
    }

    if (n >= 20){
        busPrice = n * 0.09;
        return busPrice;
    }


    if (period == "day")
        taxiPrice = taxiPrice + (n * 0.79);
    else if (period == "night")
        taxiPrice = taxiPrice + (n * 0.9);

    return taxiPrice;
}