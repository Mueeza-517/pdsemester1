#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name;
    fstream file;
    file.open("name.txt",ios::in);
    file >> name;
    file.close();
    cout <<"The name in file :" << name;
}