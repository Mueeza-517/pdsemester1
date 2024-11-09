#include <iostream>
using namespace std;
main()
{
  int size;
  cout << "Enter the size of the array:";
  cin >> size;
  if (size <= 0)
    cout << "invalid size";
  else
  {
    int array[size];
    string result = "There is no seven in the array";
    for (int idx = 0; idx < size; idx++)
      cin >> array[idx];

    for (int idx = 0; idx < size; idx++)
    {
      if ((array[idx] == 7) || (array[idx] % 10 == 7))
      {
        result = "Boom!";
      }
    }
    cout << result;
  }
}
