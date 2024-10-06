#include<iostream>
using namespace std;
string alpha(char);
main()
{
 char alphabat;
 cout <<"Enter alphabat (A,a):";
 cin >> alphabat;
 char result;
 string output=alpha(alphabat);
 cout <<output;
} 
 string alpha(char alphabat)
{
 string output;
 if(alphabat=='A')
 {
  output="You have entered A";
 }
 if(alphabat=='a')
 {
  output="You have entered a"; 
  
 }
 return output;
}


 