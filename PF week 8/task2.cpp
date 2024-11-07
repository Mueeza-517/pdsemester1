#include<iostream>
#include<conio.h>
using namespace std;
float calculateDamage(string,string, float,float);
main()
  {
    string your_type, opponent_type;
    float attack_power, opponent_defense;
    cout << "Enter your type:";
    cin >> your_type;
    cout << "Enter opponent type:";
    cin >> opponent_type;
    cout << "Enter attack power:";
    cin >>attack_power;
    cout << "Enter opponent defense:";
    cin >> opponent_defense;
    cout << calculateDamage(your_type, opponent_type,attack_power,opponent_defense);
 }
    float calculateDamage(string your_type,string opponent_type, float attack_power,float opponent_defense)
  {   
      float  effectiveness , damage;
      if((your_type=="fire" && opponent_type=="grass"))
      effectiveness=2;
      else if((your_type=="fire" && opponent_type=="electric")|| (your_type=="electric" && opponent_type=="fire") || (your_type=="fire" && opponent_type=="fire"))
      effectiveness=1;
      else if ((your_type=="electric" && opponent_type=="electric") || (your_type=="grass" && opponent_type=="electric") || (your_type=="electric" && opponent_type=="grass"))
      effectiveness=1;
      else if((your_type=="water" && opponent_type=="grass") || (your_type=="water" && opponent_type=="electric") || (your_type=="fire" && opponent_type=="water")|| (your_type=="grass" && opponent_type=="fire"))
      effectiveness=0.5;
      else if((your_type=="grass" && opponent_type=="water") || (your_type=="electric" && opponent_type=="water") || (your_type=="water" && opponent_type=="fire"))
      effectiveness=2;
      else
      effectiveness=1;
      damage=50*(attack_power/opponent_defense)*effectiveness;
      return damage;
  }
      
      
        		