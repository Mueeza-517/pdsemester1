#include<iostream>
using namespace std;
void num(string n);
main()
{
  string n;
  cout <<"Enter true or false :";
  cin >> n;
  num(n);
} 
 void num(string n)
{
   if(n=="true")
   {
   cout<<"false";
   }
  if(n!="true")
   {
  cout <<"true";
   } 
}