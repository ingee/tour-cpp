#include <iostream>
using namespace std;

int main()
{
  cout << "hey~\n";
  cout << "enter any words (quit: ctrl+d).\n";

  string s;
  for (int i=0; cin >> s; i++) {
    cout << i << ": " << s << "\n";
  }

  cout << "bye~\n";
}
