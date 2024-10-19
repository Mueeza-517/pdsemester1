#include<iostream>
using namespace std;
main()
{
   int days, Treated_patients=0 ,UnTreated_patients=0 ,Doctors=7;
   cout <<"Enter Number of days you visited hospital:";
   cin >> days;
  
   int patients,Treated ;
   for(int j=1;j<=days;j++)
   {
   cout <<"Number of patients who visited hospital on Day " << j << ":";
   cin >>patients;

  if(j%3==0)
   {
    if(UnTreated_patients>Treated_patients)
     Doctors++;
   }

   if(patients<Doctors)
  {
   Treated = patients;
  }
  else
  Treated=Doctors;

  Treated_patients=Treated+Treated_patients;
  UnTreated_patients=(patients-Treated)+UnTreated_patients;
 }
  cout <<"Treated patients:" <<Treated_patients <<endl;
  cout <<"UnTreated patients:" <<UnTreated_patients<<endl;
}
  
   
  
  
   
    
   
   
 
   
 
   