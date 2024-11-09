#include <iostream>
using namespace std;
main()
{
   float price = 500;
   string movie[5];
   movie[0] = "Gladiator";
   movie[1] = "StarsWars";
   movie[2] = "Terminator";
   movie[3] = "TakingLives";
   movie[4] = "TombRider";
   string name;
   cout << "Enter the movie name(Gladiator,StarsWars,Terminator,TakingLives,TombRider):";
   cin >> name;
   for (int idx = 0; idx < 5; idx++)
   {
      if (movie[idx] == name)
      {
         if ((idx + 1) % 2 == 0)
            cout << "Discount on the movie ticket is " << price * 0.1;
         else
            cout << "Discount on the movie ticket is " << price * 0.05;
      }
   }
}