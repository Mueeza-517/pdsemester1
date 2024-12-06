#include <iostream>
#include <fstream>

using namespace std;
void countwords(string fileName)
{
    fstream file;
    file.open(fileName, ios::in);

    string line;
    while (getline(file, line))
    {
        string word = "";
        char ch;
        for (int i = 0; i < line.length(); i++)
        {
            ch = line[i];

            if (ch == ' ' || ch == '\t')
            {
                if (word.length() > 0 && word.length() < 4)
                {
                    cout << word << " ";
                }
                word="";
            }
                else
                {
                    word += ch;
                }
            
        }

        if (word.length() > 0 && word.length() < 4)
            cout << word << " ";
    }
    file.close();
}

main()
{
    string fileName = "task12.txt";
    countwords(fileName);
}