#include <iostream>
using namespace std;
void reverse_order(int arr[], int n)
{
  for (int i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main()
{
  int n;
  cout << "Enter total number of elements:";
  cin >> n;

  if (n <= 0)
  {
    cout << "invalid input, Number of elements must be greater than 0";
  }
  else
  {
    int arr[n];
    cout << "enter " << n << " numbers, one per line:"<<endl;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    cout << "Number in reverse order:";
    reverse_order(arr, n);
  }
}