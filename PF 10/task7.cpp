#include<iostream>
using namespace std;
void reversedwords(int length ,string array[]);
main()
{
 int length;
 cout <<"Enter the length of the array:";
 cin >> length;
 string array[length];
 for(int idx = 0 ; idx < length ;idx++)
 {
    cout <<"Enter word "<<idx+1 <<" : ";
    cin >> array[idx];
 }
 reversedwords(length ,array);
}
void reversedwords(int length ,string array[])
{
    cout <<"Reversed array:";
    int idx = 0;
    for(int i = length ; i >= idx ; i--)
    {
      cout <<array[i] << " ";
    }
}
