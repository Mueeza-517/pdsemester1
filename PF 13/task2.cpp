#include<fstream>
#include<iostream>
using namespace std;
main()
{   
    int integer;
    fstream file;
    file.open("sample.txt", ios::out);
    cout <<"Enter the integer :" << integer;
    file.close();
}