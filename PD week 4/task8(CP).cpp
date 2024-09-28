#include<iostream>
using namespace std;
void pet(int holidays);
main()
 {
   int holidays;
   cout <<"Enter the number of holidays:";
   cin >> holidays;
   pet(holidays);
 }
   void pet(int holidays)
  {
   int  working_days , time1  ,time2 ,difference ,d  ,e ,f;
   int c;
   working_days=365-holidays;
   time1=(working_days*63)+(holidays*127);
   difference=30000-time1;
   time2=difference/60;
   c=difference % 60;
    if(difference>=1)
   {  
     
   cout <<"Tom sleeps well "<<endl;
   cout <<time2<< "  hours and " <<c <<" minutes less for play";
   }
   if(difference<1)
   {
   d =time1-30000;
   e=d/60;
   f=d % 60;
   cout <<"Tom will run away "<<endl;
   cout <<e<< "  hours and " <<f <<" minutes  for play";
   }
 }
   
   
   
   
   
   
   