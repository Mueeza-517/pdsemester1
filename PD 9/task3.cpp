#include<iostream>
using namespace std;
bool length(string);
int main()
{
    string word;
    cout <<"Enter a string:";
    cin >> word;
   
    cout << length(word);
}
  bool length(string word)
    {
       int count=0;
       for(int idx=0;word[idx]!='\0';idx++)
    {
          count++;
    }
    if(count%2==0)
      return true;
      else 
      return false;
    }

