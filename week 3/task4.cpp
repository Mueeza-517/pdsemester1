#include<iostream>
using namespace std;
main()
{
int imposer_count;
cout << "enter imposer count:";
cin >>imposer_count;
int player_count;
cout <<"enter player count:";
cin >>player_count;
int b;
b=100*(imposer_count/player_count);
cout <<"chance of being an imposer is :" <<b;
}
