#include <iostream>
using namespace std;
bool Isrepeatingcycle(int length, int cycle[]);
main()
{
  int length;
  cout << "Enter the length of the array:";
  cin >> length;
  int cycle[length];
  cout << "Enter the array " << endl;
  for (int idx = 0; idx < length; idx++)
  {
    cin >> cycle[idx];
  }
  cout <<"Answer is : "<<Isrepeatingcycle(length, cycle);
}
bool Isrepeatingcycle(int length, int cycle[])
{
  int len, i, count = 0, j;
  {
    if (length % 2 != 0)
    {
      i = length - 1;
      len = i / 2;
      j = len;
      
    }
    else
    {
      len = i / 2;
      j = len;
    
    }
  }
  for (int idx = 0; idx < len; idx++)
  {
    if (cycle[idx] == cycle[idx+len])
    {
      count++;
    }
  }
  if (count == j)
    return true;
  else
    return false;
}