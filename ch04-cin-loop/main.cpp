#include <iostream>
#include <string>
using namespace std;

int main() 
{
  cout << "hello~\n";

  string text;
  while (cin) {
    cin >> text;
    cout << text << endl;
  }

  cout << "bye~\n";
}
