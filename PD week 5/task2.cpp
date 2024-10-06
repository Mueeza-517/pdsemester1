#include<iostream>
using namespace std;
float myfunction(float length,float width,float height,float volume ,string unit);
main()
{
  float length, width, height, volume;
  string unit;
  cout <<"Enter the length of pyramid (in meters):";
  cin >> length;
  cout <<"Enter the width of pyramid (in meters):";
  cin >> width;
  cout <<"Enter the height of pyramid (in meters):";
  cin >> height;
  cout <<"Enter the desired output unit (millimeter, centimeter , meter , kilometer ):";
  cin >> unit;
  volume=myfunction( length, width,height,volume ,unit);
  cout <<volume;
}
 
  float myfunction(float length,float width,float height,float volume ,string unit)
  {
   if(unit=="meter")
    {
    volume=(length*width*height)/3;
    }
   if(unit=="millimeter")
    {
      volume=(length*width*height*1000*1000*1000)/3;
    }
   if(unit=="centimeter")
    {
      volume=(length*width*height*100*100*100)/3;
    }
   if(unit=="kilometer")
    {
    volume=((length*width*height)/1000000000)/3;
    }
   return volume;
}
     