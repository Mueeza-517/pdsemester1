#include<iostream>
using namespace std;
void progressday(int length ,int progress[]);
main()
{
  int length;
  cout <<"Enter the length of the array:";
  cin >> length;
  int progress[length];
  cout <<"Enter the array of miles"<<endl;
  for(int idx = 0;idx < length ;idx++)
   {
    cin >> progress[idx];
   }
progressday(length,progress);
}
void progressday(int length, int progress[])
{
 int count = 0;
 for(int idx = 0; idx < length-1 ;idx++)
 {
  if(progress[idx+1] > progress[idx])
  count ++;
 }
 cout << "Total number of progress days are:"<<count;
}
