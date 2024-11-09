#include<iostream>
using namespace std;
main()
{
    string  size[4];
    for(int idx=0;idx<4;idx++)
    {
      cin >> size[idx];
    }
    if((size[0]==size[1]) &&(size[0]==size[2]) && size[0]==size[3])
    cout <<"true";
    else
    cout <<"false";
}
