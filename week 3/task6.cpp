#include<iostream>
using namespace std;
main()
{
float pounds;
cout <<"the size of the fertilizer bag in pounds:";
cin >>pounds;
float cost;
cout <<"enter the cost of the bag:";
cin >>cost;
float area;
cout<< "enter the area in the square feet that can be covered by the bag:";
cin >>area;
float cost_of_fertilizing;
cost_of_fertilizing=cost/pounds;
cout <<"cost of fertilizing is:" <<cost_of_fertilizing <<endl;
float square_feet;
square_feet=cost/area;
cout <<"cost of fertilizing per square feet is:" <<square_feet;
}

