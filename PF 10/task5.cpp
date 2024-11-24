#include<iostream>
using namespace std;
void vol(int length,int array[]);
main()
{
    int length;
    cout <<"Enter the length of the array:";
    cin >> length;
    if(length<3)
    {
    cout <<"invalid length";
    }
    else if(length%3==0)
    {
    int array[length];
    cout <<"Enter the array"<<endl;
    for(int idx = 0 ; idx < length ; idx++)
    {
        cin >>array[idx];
    }
    vol(length,array);
    }
    else
    {
        cout <<"invalid length"; 
    }
}
void vol(int length,int array[])
{
    int result=0;
    for(int idx = 0 ; idx < length ; idx+=3)
    {
     result+=(array[idx]*array[idx+1]*array[idx+2]);
    }
    cout <<"result is :"<<result;
}