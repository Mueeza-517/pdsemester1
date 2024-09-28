#include<iostream>
using namespace std;
void checkSpeed(int speed);
main()
 {
  int speed;
  cout <<"Enter the speed in km/h:";
  cin >>speed;
  checkSpeed(speed);
}
  void checkSpeed(int speed)
 {
   if(speed<=100)
  {
   cout <<"perfect! you are doing good";
  }
  if(speed>100)
   {
    cout <<"Halt.....YOU WILL BE CHALLENGED!!!";
   }
}