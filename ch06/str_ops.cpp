#include <iostream>
#include <string>

using namespace std;

string compose(const string& name, const string& domain)
{
  cout << "-- compose(name, domain) --\n";
  cout << "name= " << name << ", len= " << name.length() << '\n';
  cout << "domain= " << domain << ", len= " << domain.length() << '\n';
  return name + '@' + domain;
}

void print(const string& s)
{
  cout << "-- print(s) --\n";
  cout << "s= " << s << ", len= " << s.length() << '\n';

  printf("For people who like printf: %s\n", s.c_str());
  cout << "For people who like streams: " << s << '\n';
}

int main()
{
  cout << "hey~~\n";
  cout << "ch06. Strings and Regular Expressions\n";
  cout << "  - can c++ print Korean str?\n";
  cout << "     => yes (you should adjust save option @win\n";
  cout << "  - can c++ count Korean characters?\n";
  cout << "     => yes (1 Korean character is counted as 3@mac and 2@win\n\n";

  //string compose
  auto addr = compose("ingee", "somewhere.earth");
  cout << "my addr= " << addr << ", len= " << addr.length() << '\n';

  //korean-string compose
  addr = compose("김인기", "이세상_어딘가");
  cout << "my addr= " << addr << ", len= " << addr.length() << '\n';

  string s {"ingee"};
  print(s);
  print("ingee");
  print(string{"ingee"});

  cout << "\nbye~~\n";
}
