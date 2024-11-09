#include<iostream>
using namespace std;
bool valid_pin(string);
void Calculation(string);
main()
{
    string pin;
    cout <<"Enter the pin :";
    cin >> pin;
    if(valid_pin(pin))
        Calculation(pin);
    else
     cout <<"Invalid pin ";
}
bool valid_pin(string pin)
{ 
  int count=0;
  for(int idx=0;pin[idx]!='\0';idx++)
  {
    count++;
    if((pin[idx]<48) || (pin[idx]>57))
      return false;
  }
  if(count!=4)
     return false;
  else
     return true;
}
void Calculation(string pin)
{
   string moves[10]={"Shimmy","Shake","Pirouette","Slide","Box step","Headspin","Dosado","Pop","Lock","Arabesque"};
   int idx=pin[0]-'0';
   cout << moves[idx];
   for(int i=1;i < 4;i++)
   {
       idx=(pin[i]-'0')+i;
           if(idx > 9)
               idx=idx-10;
        cout <<" , " <<moves[idx];
   }
}