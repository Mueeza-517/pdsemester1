#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType ,int holidays ,int hometownWeekends);
main()
 {  
    string yearType  ;
    int hometownWeekends , holidays;
    cout <<"Enter leap year:";
    cin >> yearType;
    cout <<"Enter the number of holidays:";
    cin >> holidays;
    cout <<"Enter the number of weekends:";
    cin >> hometownWeekends;
    cout<<calculateVolleyballGames(yearType ,holidays ,hometownWeekends);
}
   int calculateVolleyballGames(string yearType ,int holidays ,int hometownWeekends)
 {
    float weekdays,result;
    weekdays=0.75*48;
    holidays=holidays*0.65;
    result=weekdays+holidays;
    if(yearType=="leap")
    result=(result*0.15)+result;
    return result;
 }

   
    
    
    
 