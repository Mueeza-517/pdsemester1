#include<iostream>
using namespace std;
string decideAcitvity( string, string);
main()
  {
   string temperature, humidity_value;
   cout <<"Enter temperature (warm or cold):";
   cin >> temperature;
   cout <<"Enter humidity (dry or humid):";
   cin >>humidity_value;
   string output = decideAcitvity( temperature,humidity_value);
   cout <<"Rcommended activity:" <<output;
 }
  string decideAcitvity( string temperature, string humidity_value)
 {
   string output;
   if(temperature=="warm" && humidity_value=="dry")
     output="play tennis";
  else if (temperature=="warm" && humidity_value=="humid")
     output="swim";
  else if(temperature=="cold" && humidity_value=="dry")
     output="play basket ball";
  else if (temperature=="cold" && humidity_value=="humid")
     output="watch TV";
   return output;
}
 
      