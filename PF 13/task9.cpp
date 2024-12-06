#include <iostream>
#include <fstream>

using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int size, int &count, string fileName)
{
   fstream InputFile;
   InputFile.open(fileName, ios::in);

   count = 0;
   string name;
   int admissionNumber;
   float percentage;

   while (!InputFile.eof() && count < size)
   {
      getline(InputFile, name);
      InputFile >> admissionNumber;
      InputFile >> percentage;
      InputFile.ignore();

      if (percentage > 70)
      {
         names[count] = name;
         adNumbers[count] = admissionNumber;
         percentages[count] = percentage;

         count++;
      }
   }
   InputFile.close();
}
void saveTofile(string names[], int adNumbers[], float percentages[], int size, int count, string fileName)
{
   fstream OutputFile;
   OutputFile.open(fileName,ios::out);

   for( int i = 0 ; i < count ; i++)
   {
      OutputFile <<"Name : " <<names[i] <<endl;
      OutputFile <<"Admission Number : " <<adNumbers[i] <<endl;
      OutputFile <<"perentage : " <<percentages[i] <<endl <<endl;
        
   }
   OutputFile.close();
}

main()
{
   const int size = 50;
   string names[size];
   int adNumbers[size];
   float percentages[size];
   int count = 0;
  
   string InputFileName = "Task5.txt";
   string OntputFileName = "TopperStudent.txt";

   getStudentDetails(names , adNumbers , percentages , size,  count, InputFileName);

   saveTofile(names, adNumbers, percentages, size, count,OntputFileName);

   cout <<" Toppers data stored in : " << OntputFileName;

}