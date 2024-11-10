#include <iostream>
using namespace std;
void Nextletter(string word);
main()
{
  string word;
  cout << "Enter a string:";
  getline(cin,word);
  Nextletter(word);
}
void Nextletter(string word)
{
  for (int idx = 0; word[idx] != '\0'; idx++)
  {
    int ASCI_code = word[idx];
    ASCI_code++;
    char exchange;
    if (ASCI_code == 33)
      exchange = --ASCI_code;
    else
    {
      if (ASCI_code > 90 && ASCI_code < 97)
        ASCI_code = 65;
      else if (ASCI_code > 122)
        ASCI_code = 97;
        exchange=ASCI_code;
    }
    cout << exchange;
  }
}