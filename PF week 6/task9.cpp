#include<iostream>
using namespace std;
string checkTitle(int,char);
main()
 {
   int age;
   char gender;
   cout <<"Enter your age:";
   cin >>age;
   cout <<"Enter your gender(m/f):";
   cin >>gender;
   string result=checkTitle(age,gender);
   cout <<"Your personal title is:"<<result;
 }
  string checkTitle(int age,char gender)
  {
   string result;
   if(gender=='m')
       if(age<16)
      {
       result="Master";
      }
    else
        result="Mr"; 
   if(gender=='f')
       if(age<16)
       {
       result="Miss";
       }
       else
       result="Ms";
   return result;
 }
   
   