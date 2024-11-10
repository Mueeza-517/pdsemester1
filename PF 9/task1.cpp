#include<iostream>
using namespace std;
void WordPostmortem(string);
main()
   {
      string word;
      cout <<"Enter a word:";
      cin >> word;
      WordPostmortem(word);
   }
 void WordPostmortem(string word)
   {
      int idx=0;
      while(word[idx]!='\0')
      {
        cout<<word[idx] <<" found at position "<<idx <<endl;
        idx++;
      }
   }