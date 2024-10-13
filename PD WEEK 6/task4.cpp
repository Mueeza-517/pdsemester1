#include <iostream>
using namespace std;
void servicecode(char, int);
main()
{
  char code;
  char time;
  int minutes;
  cout << "Enter the service code (R/r for regular, P/p for premmium):";
  cin >> code;

  cout << "Enter the number of minutes used:";
  cin >> minutes;
  servicecode(code, minutes);
  cout <<"Service type:" <<code<<endl;
  cout <<"Total minutes used:" <<minutes<<endl;
}

void servicecode(char code, int minutes)
{
  char time;
  float amount;
  if (code == 'R' || code == 'r')
  {
    if (minutes <= 50)
      cout << "amount due:$10.00";
    else
    {
      amount = minutes - 50;
      amount = (amount * 0.20) + 10.00;
      cout << "amount due:" << amount <<endl;
    }
  }

  else if ((code == 'P' || code == 'p'))
  {
    cout << "Enter the time of call (D/d for day ,N/n for night):";
    cin >> time;

    if ((time == 'D' || time == 'd'))
    {
      if (minutes <= 75)
        cout << "amount due: 25$" ;
      else
      {
        amount = minutes - 75;
        amount = (amount * 0.10) + 25.00;
        cout << "amount due:" << amount <<endl;
      }
    }
    else if (time == 'N' || time == 'n')
    {
      if (minutes <= 100)
      cout << "amount due: $25.00";
    else
    {
      amount = minutes - 100;
      amount = (amount * 0.05) + 25.00;
      cout << "amount due:" << amount <<endl;
    }
    }
  }
}
