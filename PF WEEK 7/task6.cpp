#include<iostream>
using namespace std;
int CalculateGCD(int number_1,int number_2 , int HCF);
int CalculateLCM(int number_1,int number_2 ,int HCF);
main()
  {
   int number_1 , number_2 ;
   cout <<"Enter the first number:";
   cin >> number_1;
   cout <<"Enter the second number:";
   cin >> number_2;
   int HCF= CalculateGCD(number_1, number_2 ,HCF);
   int LCM= CalculateLCM(number_1,number_2 ,HCF);

   cout <<"GCD:" <<HCF <<endl;
   cout <<"LCM:" <<LCM <<endl;
  }
  int CalculateGCD(int number_1,int number_2 ,int HCF)
  {
   if(number_1==number_2)
   return number_1;
   
   int smaller=min(number_1,number_2);
   int larger =max(number_1,number_2);

  if(larger%smaller==0)
  return smaller;
 
 for(int i=1; i<smaller ;i++)
 {
 if((smaller%i==0)&&(larger%i==0))
 HCF=i;
 }
 return HCF;
 }
 int CalculateLCM(int number_1,int number_2,int HCF)
 {
  return (number_1*number_2)/HCF;
 }

   
   