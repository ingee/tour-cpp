#include <iostream>

using namespace std;

int main()
{
  cout << "do you want to confirm(y or n)?\n";

  char answer = 0;
  cin >> answer;
  if (answer == 'y')
    cout << "true" << endl;
  else
    cout << "false" << endl;
}
