#include<iostream>
using namespace std;
void Paticularletter(int length, string array[]);
main()
{
    int length;
    cout <<"Enter how many words you want to enter:";
    cin >> length;
    string array[length];
    for(int idx = 0; idx < length ;idx++)
    {
        cout <<"Enter word" << idx+1 <<":";
        cin >> array[idx];
    }
    Paticularletter(length , array);
}
void Paticularletter(int length , string array[])
{
    char alphabat;
    cout <<"Enter the letter you want to count:";
    cin >> alphabat;
    int count = 0; 
    for(int idx = 0; idx < length ;idx++)
     {
        int i = 0;
        while(array[idx][i]!='\0')
        {
        if(alphabat==array[idx][i])
        count ++;
        i++;
        }
     }
     cout << count;
}