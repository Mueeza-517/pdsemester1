#include <iostream>
using namespace std;
double calculateTotalResistance(double resistance[], int size);
main()
{
  int size;
  cout << "Enter the number of resistors in the series circuit:";
  cin >> size;
  if (size <= 0)
  {
    cout << "Invalid input";
  }
  else
  {
    double sum = 0;
    double resistance[size];
    cout << "Enter the resistance values(in ohms) of the " << size << " resistors, one per line:" << endl;
    for (int i = 0; i < size; i++)
    {
      cin >> resistance[i];
      sum = sum + resistance[i];
    }
    cout << "The total resistance of the series circuit is " << sum <<" Ohm ";
  }
}