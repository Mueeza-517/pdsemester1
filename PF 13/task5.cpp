#include<iostream>
#include<fstream>
using namespace std;
int countlines (string filename);
main()
{
   string filename = "line.txt";
   cout << "Number of lines : " <<countlines (filename);
}  
  int countlines (string filename)
  {
  fstream file;
  file.open("line.txt", ios::in); 
   int count = 0;
   while(!file.eof())
   {
    string line;
    getline(file,line);
    if(!line.empty())
    {
    count ++;
    }
   } 
   file.close();
   return count;
   }  
 




