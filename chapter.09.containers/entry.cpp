#include <iostream>
#include <string>
#include "entry.h"

using namespace std;

ostream& operator<<(ostream& os, const Entry& e)
{
  return os << "{\"" << e.name << "\"," << e.number << "}";
}

istream& operator>>(istream& is, Entry& e)
{
  char c, c2;
  if (is>>c && c=='{' && is>>c2 && c2=='"') {
    string name;
    while (is.get(c) && c!='"')
      name+=c;

    if (is>>c && c==',') {
      int number = 0;
      if (is>>number>>c && c=='}') {
        e = {name, number};
        return is;
      }
    }
  }
  is.setstate(ios_base::failbit);
  return is;
}

/*
int main(int argc, const char* argv[])
{
  cout << "hey~ this is " << argv[0] <<".\n";
  cout << "\tio for user-defined-type.\n";
  cout << '\n';

  Entry e { "InGee Kim", 99 };
  cout << "cout << e\n";
  cout << e << '\n';

  cout << "cin >> e\n";
  cout << "\tenter {\"_name_\", _number_}\n";
  cin >> e;
  cout << e << '\n';

  cout << "bye~\n";
}
*/
