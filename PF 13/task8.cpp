#include <iostream>
#include <fstream>

using namespace std;
void getStudentDetails(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int size, int &count)
{
    string choice;
    count = 0;
    while (count < size)
        {
            
            cout << "Enter student name: ";
            cin.ignore();
            getline(cin, names[count]);

            cout << "Enter student age : ";
            cin >> ages[count];

            cout << "Enter student matric marks : ";
            cin >> matricMarks[count];

            cout << "Enter student fsc Marks : ";
            cin >> fscMarks[count];

            cout << "Enter student ecat Marks : ";
            cin >> ecatMarks[count] ;


            count++;

            if (count >= size)
            {
                cout << "Maximum student limit reached " << endl;
                break;
            }

            cout <<"Do you want to enter another student?( yes or no) : ";
            cin >> choice;

            if(choice=="NO" || choice == "no")
            {
                  break;
            }
        }
}

void saveToFile(string names[], int ages[], float matricMarks[], float fscMarks[], float ecatMarks[], int count, string fileName)
{
   fstream file;
   file.open(fileName,ios::out) ;
   for (int i = 0 ; i < count ;i++)
   {
    file <<"student name : " << names[i] <<endl;
    file <<"student age : " << ages[i] <<endl;
    file <<"student matric Marks : " << matricMarks[i] <<endl;
    file <<"student FSC Marks : " << fscMarks[i] <<endl;
    file <<"student ECAT Marks : " << ecatMarks[i] <<endl << endl << endl;
   }
   file.close();
}
main()
{
    const int size = 50;
    string names[size];
    int ages[size];
    float matricMarks[size];
    float fscMarks[size];
    float ecatMarks[size];
    int count = 0;
    string fileName ="Student.txt";
    getStudentDetails(names, ages, matricMarks, fscMarks, ecatMarks, size, count);

    saveToFile(names, ages, matricMarks, fscMarks, ecatMarks, count, fileName);
}