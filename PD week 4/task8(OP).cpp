#include<iostream>
using namespace std;
void system();
main()
 {
  system();
 }
   void system()
  {
   cout <<"UNIVERSITY MANAGEMENT SYSTEM"<<endl;
   cout <<"UET LAHORE";
   cout << endl;
   string name;
   cout <<"Enter your name:";
   cin >> name;
   float matric_marks;
   cout <<"Enter your matric marks:";
   cin >> matric_marks;
   float inter_marks;
   cout <<"Enter your inter marks:";
   cin >>inter_marks;
   float ECAT_marks;
   cout <<"Enter your ECAT marks:";
   cin >>ECAT_marks;
   float total;
   total=(0.3*(matric_marks/1100)*100)+(0.3*(inter_marks/550)*100)+(0.4*(ECAT_marks/400)*100);
   cout <<" your aggregate is:"<<total<<endl;

   string name2;
   cout <<"Enter your name2:";
   cin >> name2;
   float matric_marks2;
   cout <<"Enter your matric marks2:";
   cin >> matric_marks2;
   float inter_marks2;
   cout <<"Enter your inter marks2:";
   cin >>inter_marks2;
   float ECAT_marks2;
   cout <<"Enter your ECAT marks2:";
   cin >>ECAT_marks2;
   float total2;
   total2=(0.3*(matric_marks2/1100)*100)+(0.3*(inter_marks2/550)*100)+(0.4*(ECAT_marks2/400)*100);
   cout <<" your aggregate is:"<<total2<<endl;
   if(ECAT_marks>ECAT_marks2)
   {
    cout <<"student 1 got roll no 1:";
   }
   if(ECAT_marks<ECAT_marks2)
   {
    cout <<"student 2 got roll no 1:";
   }
}
   
 