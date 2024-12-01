#include<iostream>
using namespace std;
void identityMatrixSum(int array[3][3]);
main()
{
 int array[3][3];
 cout <<"Enter the elements of the matrix :"<< endl;
 identityMatrixSum(array);
}
void identityMatrixSum(int array[3][3])
{
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ;j++)
        {
           cout <<"Enter element at position ["<<i<<"]["<<j<<"] : ";
           cin >> array[i][j];
        }
    }
    cout <<"The matrix you entered is :" <<endl;
    for(int i = 0 ; i < 3 ; i++)
    {
       for(int j = 0 ; j < 3 ;j++)
       {
         cout <<array[i][j] <<"\t";
       }
       cout << endl;
    }
    {
        if(( array[0][0]==1) && ( array[0][1]==0) &&  ( array[0][2]==0) &&
           ( array[1][0]==0) && ( array[1][1]==1) && ( array[1][2]==0) &&
           ( array[2][0]==0) && ( array[2][1]==0) && ( array[2][2]==1))
        cout <<"The Entered matrix is an identity matrix .";
        else
        cout <<"The Entered matrix is Not an identity matrix .";
    }
}