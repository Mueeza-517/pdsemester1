#include<iostream>
using namespace std;
main()
{
 int paint;
cout <<"number of square meter you can paint(in meters):";
cin >>paint;
int width;
cout <<"width of the single wall(in meters):";
cin >>width;
int height;
cout <<"height of the singal wall:";
cin >>height;
int d;
d=paint/(width*height);
cout <<"number of walls you can paint:" <<d;
}