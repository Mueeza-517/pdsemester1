#include <iostream>
#include <fstream>
using namespace std;
int countcharacters(string filename);
main()
{
  string filename = "line.txt";
  cout << "Number of characters : " << countcharacters(filename);
}
int countcharacters(string filename)
{
  fstream file;
  file.open("line.txt", ios::in);
  int count = 0;
  while (!file.eof())
  {
    string line;
    getline(file, line);
    if (!line.empty())
    {
      for (int i = 0; i < line.length(); i++)
      {
        count++;
      }
    }
  }
  file.close();
  return count;
}  



