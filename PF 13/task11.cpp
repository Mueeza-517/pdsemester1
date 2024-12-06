#include <iostream>
#include <fstream>
using namespace std;

int CountLines(string filename);

int main()
{
    string filename = "task11.txt";
    cout << "Number of lines : " << CountLines(filename) << endl;
}

int CountLines(string filename)
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

    while (getline(file, line))
    {
        if (!line.empty())
        {
            char ch = line[0];

            if (ch >= 'A' && ch <= 'Z')
            {
                ch += 'a' - 'A';
            }

            if (ch != targetChar)
            {
                count++;
            }
        }
    }

    file.close();
    return count;
}