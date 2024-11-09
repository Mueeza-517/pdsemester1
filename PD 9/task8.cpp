#include<iostream>
using namespace std;
main()
{
    int length;
    cout <<"Enter the length of the array:";
    cin >> length;
    int time_in_seconds=2;
    string colors[length];
    for (int idx=0;idx<length;idx++)
    {
        cin >>colors[idx];
    }
    for (int idx=1;idx<length;idx++)
    {
        if(colors[idx]==colors[idx-1])
        time_in_seconds=time_in_seconds+2;
        else
        time_in_seconds=time_in_seconds+3;
         }
         cout <<"Time is "<<time_in_seconds<<" Seconds ";
}