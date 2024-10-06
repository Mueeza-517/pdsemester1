#include<iostream>
using namespace std;
string CalculatepoolState(float volume,float hours,float first_pipe,float second_pipe);
main()
 {
  float volume,first_pipe,second_pipe,hours;
  cout <<"Enter volume of the pool in liters:";
  cin >>volume;
  cout <<"Enter the flow rate of the first pipe per hour:";
  cin >>first_pipe;
  cout <<"Enter the flow rate of the second pipe per hour:";
  cin >>second_pipe;
  cout <<"Enter hours that the worker is absent:";
  cin  >>hours;
  string output;
  output= CalculatepoolState(volume,hours,first_pipe,second_pipe);
  cout <<output;

 }
  string CalculatepoolState(float volume,float hours,float first_pipe,float second_pipe)
  { 
    string output;
    float first_pipe_contribution=first_pipe*hours;
    float second_pipe_contribution=second_pipe*hours;
    float Total_volume= first_pipe_contribution+second_pipe_contribution;
    int overflow=Total_volume-volume;
    if(overflow>0)
{
   output="for "+to_string(hours)+" hours the pool overflows with "+to_string(overflow)+" liters ";
}
   if(overflow<0)
 {
  int pipe1_percentage= first_pipe_contribution/ Total_volume*100;
  int pipe2_percentage=100- pipe1_percentage;
  int volume1_percentage=Total_volume/volume*100;
  output="The pool is "+to_string(volume1_percentage)+"% full pipe 1: "+to_string(pipe1_percentage)+"% full pipe 2: "+to_string(pipe2_percentage)+"%";
  return output;
 }
}
   
    
   