#include<iostream>
using namespace std;
main()
{
string movie;
cout <<"enter the movie name:";
cin >> movie;
int price1;
cout <<"enter the adult ticket price:";
cin >>price1;
int price2;
cout <<"enter the child ticket price:";
cin >>price2;
int ticket_sold1;
cout <<"enter the number of adult tickets solds:";
cin >>ticket_sold1;
int ticket_sold2;
cout <<"enter the number of child ticket sold:";
cin >>ticket_sold2;
int charity;
cout<<"enter the percentage  amount to be donated to the charity:";
cin >>charity;
int b;
b=(price1*ticket_sold1)+(price2*ticket_sold2);
cout <<"movie:" <<movie<< endl;
cout << "total amount generatedfrom ticket sale:"<<b <<endl;
int c;
c=(b*10)/100;
cout << "donation to charity is :"<<charity<<endl;
int d;
d=b-c;
cout <<"remianing amount after donation:"<<d<<endl;
}

