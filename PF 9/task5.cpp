#include <iostream>
using namespace std;
bool isAlreadyEntered(int arr[], int size, int num)
{
  for (int i = size - 1; i >= 0; i--)
  {
    if (num == arr[i])
      return true;
  }
  return false;
}
main()
{
  int number;
  cout << "Enter the number of elment:";
  cin >> number;
  if (number <= 0)
  {
    cout << "you enetred an invalid number";
  }
  else
  {
    int arr[number];
    cout << "Enter " << number << " numbers, one per line:"<< endl;
    for (int size = 0; size < number; size++)
    {
      cin >> arr[size];
      if(isAlreadyEntered(arr,size,arr[size]))
         cout <<"Already Entered: " << arr[size];
    }
    int Unique_number=arr[0];
    cout << "Unique Entries are : " << Unique_number;
    for(int i=1;i<number;i++)
      if(Unique_number!=arr[i])
      cout <<" , " << arr[i];
  }
}