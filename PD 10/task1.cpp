#include<iostream>
using namespace std;
bool Isrearranged(int length,int array[]);
main()
  {
    int length;
    cout <<"Enter the length of the array:";
    cin >> length;
    cout <<"Enter the elements:" <<endl;
    int array[length];
    for(int idx = 0 ; idx<length ;idx++)
    {
      cin >> array[idx];
    }
    cout <<"Answer is:"<< Isrearranged(length,array);
 }
 bool Isrearranged(int length,int array[])
 {
      for(int idx = 0 ; idx<length ;idx++)
       {
        for(int j = 0 ; j < length-1 ; j++)
        {
        if(array[j]>array[j+1])
        swap(array[j],array[j+1]);
        }
       }
      for(int idx = 0 ; idx<length-1 ;idx++)
      {
      if((array[idx+1])!=(array[idx]+1))
      return false;
      }
     return true; 
 }
