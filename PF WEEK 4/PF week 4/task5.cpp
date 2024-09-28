#include<iostream>
using namespace std;
void inc();
main()
 { 
 inc();
 }
 void inc()
{
 float inches;
 cout <<" Enter the measurement value in inches:";
 cin >> inches;
 float feet;
 feet = inches/12;
 cout <<" equivalent in feet:" <<feet;
}