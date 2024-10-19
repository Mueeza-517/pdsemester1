#include<iostream>
#include<iomanip>
using namespace std;
main()
    {
      int count  ;
      cout <<"Enter the count of cargo for transportation:";
      cin >> count;

        float cargo=0, train=0 ,truck=0, minibus=0 ,average;
        for(int j=1; j<=count ; j++)
       {
        cout<<"Enter the tonnage of cargo " << j <<":";
        cin >> cargo;
       
       if(cargo>11)
       train=train+cargo;
       else if(cargo>3)
       truck=truck+cargo;
       else
        minibus= minibus+cargo;
       }
       float total=train+truck+minibus;
       average=((train*120)+(truck*175)+(minibus*200))/total;
    
       cout << fixed <<setprecision(2) <<average<< "%"<<endl;
       cout << fixed <<setprecision(2) <<(minibus/total)*100<< " % "<<endl;
       cout << fixed <<setprecision(2) <<(truck/total)*100 << " % "<<endl;
       cout << fixed <<setprecision(2) <<(train/total)*100 << " % "<<endl;
     
 }
