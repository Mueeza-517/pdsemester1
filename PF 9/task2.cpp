#include<iostream>
using namespace std;
void reverseWord(string, int);
main()
   {
      int count;
      string word;
      cout <<"Enter a string:";
      cin >> word;
      reverseWord(word,count);
   }
 void reverseWord(string word,int count)
   {
      int idx;
      while(word[idx]!='\0')
      {
        count++;
        idx++;
      }
       for(int idx=count;idx>=0;idx--)
        {
            cout<<word[idx];
        }
   }