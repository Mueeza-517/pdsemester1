#include <iostream>
#include <fstream>
using namespace std;

int calculateFrequency(string filename);

int main()
{
    string filename = "line.txt";
    cout << "Character frequency: " << calculateFrequency(filename) << endl;
    
}

int calculateFrequency(string filename)
{
    fstream file;
    file.open(filename, ios::in);

    char targetChar;
    file >> targetChar;
    
    if (targetChar >= 'A' && targetChar <= 'Z')
    {
        targetChar += 'a' - 'A';
    }

    file.ignore();

    int count = 0;
    string line;

    while (!file.eof())
    {
        getline(file, line);
        if (!line.empty())
        {
            for (int i = 0; i < line.length(); i++)
            {
                char ch = line[i];

                if (ch >= 'A' && ch <= 'Z')
                {
                    ch += 'a' - 'A';
                }

                if (ch == targetChar)
                {
                    count++;
                }
            }
        }
    }

    file.close();
    return count;
}