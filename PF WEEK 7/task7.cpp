#include<iostream>
using namespace std;
float decimalpoint (float result)
 {
  int answer= result*100;
      return answer/100.0;
 }
main()
  {
    int count;
    cout <<"Enter numbers count :";
    cin >> count;
    float product_1=0,product_2=0,product_3=0,product_4=0,product_5=0;
    
    for(int j=0; j<count ;j++)
    {
      int number;
      cout <<"Enter a number:";
      cin >> number;
      
      if(number<200)
      product_1++;
      else if(number<=399)
      product_2++;
      else if(number<=599)
      product_3++;
      else if(number<=799)
      product_4++;
      else
      product_5++; 
   }
      
   cout <<decimalpoint((product_1/count)*100.0) <<"%" <<endl;
   cout <<decimalpoint((product_2/count)*100.0) <<"%" <<endl;
   cout <<decimalpoint((product_3/count)*100.0) <<"%" <<endl;
   cout <<decimalpoint((product_4/count)*100.0) <<"%" <<endl; 
   cout <<decimalpoint((product_5/count)*100.0) <<"%" <<endl;
 }

      
 
 