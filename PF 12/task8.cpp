#include <iostream>
using namespace std;
string Battleship(string array[][5],string torpedo );
main()
{
    string torpedo;
    const int RowSize = 5;
    const int ColumnSize = 5;
    string array[RowSize][ColumnSize] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "*"}};
    cout <<"Enter coordinate to fire torpedo (e.g., A1 to A5 ,B1 to B5 ,C1 to C5 ,D1 to D5 ,E1 to E5):";
    cin >> torpedo;
    cout <<"Result : " << Battleship(array, torpedo);
}
string Battleship(string array[][5], string torpedo)
{
  if((torpedo=="A4") || (torpedo=="A5") || (torpedo=="B2") ||
     (torpedo=="C2") ||  (torpedo=="D2") || (torpedo=="E4") ||
                         (torpedo=="E5"))
    return "BOOM";
    else
    return "splash";   
}