#include<iostream>
using namespace std;
string findZodicSign(int day, string month);
main()
 {
    int day; 
    string month;
    cout <<"Enter the day of birth:";
    cin >> day;
    cout <<"Enter the month of birth (e.g ., January ,February):";
    cin >> month;
    string output= findZodicSign(day,month);
    cout<<"Zodic sign:" <<output;
 }
   string findZodicSign(int day, string month)
  {
     string output;
     if(month=="March" &&(day>=21 && day<=31))
        output="Aries";  
     else if(month=="April" &&(day>=1 && day<=19))
        output="Aries";
     else if(month=="April" &&(day>=20 && day<=30))
        output="Taurus";  
     else if(month=="May" &&(day>=1 && day<=20))
        output="Taurus"; 
     else if(month=="May" &&(day>=21 && day<=31))
        output="Gemini";  
     else if(month=="June" &&(day>=1 && day<=20))
        output="Gemini";
     else if(month=="June" &&(day>=21 && day<=30))
        output="Cancer";  
     else if(month=="July" &&(day>=1 && day<=22))
        output="Cancer";
     else if(month=="July" &&(day>=23 && day<=31))
        output="Leo";  
     else if(month=="August" &&(day>=1 && day<=22))
        output="Leo";
     else if(month=="August" &&(day>=23 && day<=31))
        output="Virgo";  
     else if(month=="September" &&(day>=1 && day<=22))
        output="Virgo"; 
     else if(month=="September" &&(day>=23 && day<=30))
        output="Libra";  
     else if(month=="October" &&(day>=1 && day<=22))
        output="Libra";
     else if(month=="October" &&(day>=23 && day<=31))
        output="Scotpio";  
     else if(month=="November" &&(day>=1 && day<=22))
        output="Scotpio"; 
     else if(month=="November" &&(day>=22 && day<=30))
        output="Sagittarius";  
     else if(month=="December" &&(day>=1 && day<=21))
        output="Sagittarius";
     else if(month=="December" &&(day>=22 && day<=31))
        output="Capricorn";  
     else if(month=="January" &&(day>=1 && day<=19))
        output="Capricorn"; 
     else if(month=="January" &&(day>=20 && day<=31))
        output="Aquarius";  
     else if(month=="February" &&(day>=1 && day<=18))
        output="Aquarius";
     else if(month=="February" &&(day>=19 && day<=30))
        output="Pisces";  
     else if(month=="March" &&(day>=1 && day<=20))
        output="Pisces";
    return output;
 }