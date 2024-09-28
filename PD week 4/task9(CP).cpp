#include<iostream>
using namespace std;
void COVID();
main()
{
  COVID();
}
  void COVID()
   {
    int people , tp , roll;
    cout <<"Enter the number of people in the household:";
    cin >>people;
    cout <<"Enter the number of rolls in TP:";
    cin >> tp;
    roll=(500*tp)/(people*57);
     if(roll>=14)
      {
       cout <<" Tp will last ";
       cout <<  roll;
       cout <<" days, no need to panic";
      }
     if(roll<14)
     {
      cout<<"TP will last only";
      cout <<  roll;
      cout <<" days, buy more";
      }
   }
      
    
    