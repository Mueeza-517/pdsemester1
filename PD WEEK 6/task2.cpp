#include<iostream>
using namespace std;
float calculateAverage(float Marks_English,float Marks_Maths, float Marks_Chemistry, float Marks_Social_Science, float Marks_Biology);
string calculateGrade(float average);
main()
 {
  float Marks_English, Marks_Maths,  Marks_Chemistry,  Marks_Social_Science, Marks_Biology;
  string name ;
  cout <<"Enter student name:";
  cin >> name;
  cout <<"Enter the marks for English:";
  cin >> Marks_English;
  cout <<"Enter marks  for Math:";
  cin >> Marks_Maths;
  cout <<"Enter the marks for chemistry:";
  cin >> Marks_Chemistry;
  cout <<"Enter the marks for Social science:";
  cin >>Marks_Social_Science;
  cout <<"Enter the marks for Biology:";
  cin >>Marks_Biology;
  float average = calculateAverage( Marks_English,Marks_Maths, Marks_Chemistry,Marks_Social_Science,Marks_Biology);
  string grade = calculateGrade(average);
  cout <<"Student name :" <<name <<endl;
  cout <<"percentage :" <<average <<"%" <<endl;
  cout <<"Grade :" <<grade;
}
float calculateAverage(float Marks_English,float Marks_Maths, float Marks_Chemistry, float Marks_Social_Science, float Marks_Biology)
{
  float total = Marks_English + Marks_Maths + Marks_Chemistry + Marks_Social_Science + Marks_Biology;
  return (total/5);
}

string calculateGrade(float average)
{
      
  if(average>=90 && average<=100)
  {
    return "A+";   
  }
  else if(average>=80 && average<=90)
  {
    return "A";
  }
  else if(average>=70 && average<=80)
  {
    return "B+";
  }
  else if(average>=60 && average<=70)
  {
    return "B";
  }
  else if(average>=50 && average<=60)
  {
    return "C";
  }
  else if(average>=40 && average<=50)
  {
      return "D";
  }
  else if(average<40)
  {
    return"F";
  }
}
    
   
   
   
   
   
   