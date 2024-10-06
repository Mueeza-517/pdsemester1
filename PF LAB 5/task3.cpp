#include<iostream>
#include<math.h>
using namespace std;
void square_root(float number);
main()
{
   float number;
   cout <<"Enter a number:";
   cin >> number;
   square_root(number);
}
  void square_root(float number)
   {
    float ans;
    ans=sqrt(number);
    cout<<" square root of  " <<number <<" is: " <<ans;
    }

  