#include <iostream>
using namespace std;
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize);
main()
{
  int firstArraySize, secondArraySize;
  cout << "Enter the number of elements for the first array(must be 2):";
  cin >> firstArraySize;
  int firstArray[firstArraySize];

  if (firstArraySize <= 0)
  {
    cout << "Invalid size";
  }
  cout << "Enter " << firstArraySize << " for the first array , one per line:" << endl;
  for (int idx = 0; idx < firstArraySize; idx++)
  {
    cin >> firstArray[idx];
  }
  cout << "Enter the number of elements for the second array:";
  cin >> secondArraySize;
  int secondArray[secondArraySize];
  if (secondArraySize <= 0)
  {
    cout << "invalid size";
  }
  cout << "Enter " << secondArraySize << " for the second array , one per line:" << endl;
  for (int idx = 0; idx < secondArraySize; idx++)
  {
    cin >> secondArray[idx];
  }
  insertArrayInMiddle(firstArray, firstArraySize, secondArray, secondArraySize);
}
void insertArrayInMiddle(int firstArray[], int firstArraySize, int secondArray[], int secondArraySize)
{
  int sum = firstArraySize + secondArraySize;
  int new_Array[sum];
  new_Array[0] = firstArray[0];
  for (int i = 1; i <= secondArraySize; i++)
  {
     new_Array[i]=secondArray[i-1];
  }
  new_Array[secondArraySize+1]=firstArray[1];
  cout << "[" << new_Array[0];
   for(int i=1;i<sum;i++)
   {
    cout <<" , " <<new_Array[i];
  }
  cout <<"]";
}
