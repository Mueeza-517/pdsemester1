#include<iostream>
using namespace std;
void plant(string,int,int,int);
main()
   {
    string seed;
    int water, fert, temp;
    cout <<"Enter the type of flower (special character):";
    cin >> seed;
    cout <<"Enter the quantity of water:";
    cin >> water;
    cout <<"Enter the quantity of fert:";
    cin >> fert;
    cout <<"Enter the quantity of temperature:";
    cin >> temp;
    plant(seed,water,fert,temp);
   }
  void plant(string seed,int water,int fert,int temp)
   {
         for(int i=1;i<=water;i++)
              {
                for(int j=1;j<=water;j++)
                    cout <<"-";
                      for(int k=1;k<=fert;k++)
                           {
                             if(temp<=30 && temp>=20)
                             cout<<seed;
                             else if(i==water)
                             {
                               cout <<seed;
                               break;
                             }
                           }
              }


  }
 