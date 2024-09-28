#include<iostream>
using namespace std;
void min(int hours,int minutes,int c);
main()
 {
  int hours,minutes,c;
  cout <<"Enter the number of hours:";
  cin >> hours;
  cout <<"Enter the number of minutes:";
  cin >> minutes;
  min(hours,minutes,c);
}
  void min(int hours,int minutes,int c)
  {
    c=hours*60;
    if(c>minutes)
  {
  cout << hours;
  }
   if(c<minutes)
  {
   cout <<minutes;
  }
}