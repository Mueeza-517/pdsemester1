#include<iostream>
using namespace std;
void jazzifyChords(string chords[],int numChords);
main()
{
   int numChords;
   cout <<"Enter the number of Chords:";
   cin >> numChords;
   cout <<"Enter " <<numChords <<" chords, one per line:"<<endl;
   string chords[numChords];
   for(int idx=0;idx<numChords;idx++)
   {
    cin >> chords[idx];
   }
    jazzifyChords(chords, numChords);
}
void jazzifyChords(string chords[],int numChords)
{
   for(int idx=0;idx<numChords;idx++)
   {
      int j=0;
      while(chords[idx][j]!='\0')
      j++;
      if(chords[idx][j-1]!='7')
      chords[idx]=chords[idx]+"7";
   }
   cout <<"jazified string : [" << chords[0];
   for(int idx=1;idx<numChords;idx++)
   {
      cout << " , " << chords[idx];
   }
  cout << " ] ";
}

