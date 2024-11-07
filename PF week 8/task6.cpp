#include<iostream>
using namespace std;
int pilecube(int);
int volume(int);
main()
{
    int m;
    cout <<"Enter the volume of the building:";
    cin >>m;
    cout << pilecube(m);
}
int pilecube(int m)
  {
    for (int n=1;n<m ;n++)
    {
        if(m==volume(n))
          return n;
    }
    return -1;
  }
 int volume(int n)
  {
    int sum=0;
    for(int i=n;i>0;i--)
    {
        sum=sum+(i*i*i);
    }
    return sum;
  }