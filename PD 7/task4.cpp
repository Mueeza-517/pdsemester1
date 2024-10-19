#include<iostream>
using namespace std;
void amplify(int number);
main()
  {
     int number;
     cout <<"Enter a number to amplify:";
     cin >> number;
     amplify(number);
  }
  void amplify(int number)
 {
   for(int i=1; i<=number; i++)
     {
        if(i%4==0)
        {
          int num= i*10;
          cout << num << "," ;
          num=0;
        }
        else
        cout << i << ",";
    }
}

          