#include<iostream>
using namespace std;
string ProjectTimeCalculation(int hours, int days,int workers);
main()
 {
   int hours, days, workers;
   cout <<"Enter the needed hours:";
   cin >>hours;
   cout <<"Enter the days that the firm have:";
   cin >>days;
   cout <<"Enter the number of all workers:";
   cin >>workers;
   string output;
   output=ProjectTimeCalculation( hours,days,workers);
   cout <<output;
}
 string ProjectTimeCalculation(int hours, int days,int workers)
  {
    string output;
    int remaining_hours;
    float training_days=(10/100.0)*days;
    float remaining_days=days- training_days;
    int working_hours=remaining_days*workers*10;
    if(working_hours>hours)
    {
     int remaining_hours=working_hours-hours;
     output="Yes! "+to_string(remaining_hours)+ " hours Left";
    }
    if(working_hours<hours)
   {
   int remaining_hours=hours-working_hours;
   output="Not enough time! "+to_string(remaining_hours)+ " hours needed";
   }
   return output;
  }
 
 
     
     
   
    

    













