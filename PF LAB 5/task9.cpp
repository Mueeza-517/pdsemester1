#include<iostream>
using namespace std;
string timeTravel(int ,int);
main()
{
 int hours,minutes;
 cout <<"Enter hours:";
 cin >> hours;
 cout <<"Enter minutes:";
 cin >>minutes;
 string output;
 output=timeTravel(hours,minutes);
 cout <<output;

}
string timeTravel(int hours,int minutes)
 {
 int requiredhours=hours*60;
 int time1=requiredhours+minutes+15;
 int Hour=time1/60;
 if(Hour>=24)
 Hour=0;
 int time2=time1%60;
 string output=to_string(Hour) +":"+to_string(time2);
 return output;
 }

  
  
 
 
  
 

