#include <iostream>
#include<cmath>
using namespace std;
int rotation(int length ,string direction[]);
main()
{
    int length;
    cout << "Enter the length of the string:";
    cin >> length;
    string direction[length];
    cout <<"Enter the direction(left/right)"<<endl;
    for (int idx = 0; idx < length; idx++)
    {
        cin >> direction[idx];
    }
    cout << rotation(length ,direction);
}
  int rotation(int length ,string direction[])
{
    int count = 0;
    for (int idx = 0; idx < length; idx++)
    {
        if (direction[idx] == "right")
            count += 90;
        else
            count -= 90;
    }
    if (count >=0)
    {
        count/=360;
        return count;
    }
    if(count < 0)
    {
        count = abs(count);
        count/=360;
        return count;
    }
}