#include <iostream>

using namespace std;

string compose(const string& name, const string& domain)
{
  return name + '@' + domain;
}

void print(const string& s)
{
  printf("For people who like printf: %s\n", s.c_str());
  cout << "For people who like streams: " << s << '\n';
}

int main()
{
  cout << "hey~~\n";
  cout << "ch06. Strings and Regular Expressions\n\n";

  auto addr = compose("ingee", "somewhere.earth");
  cout << "my addr= " << addr << '\n';

  string s {"ingee"};
  print(s);
  print("ingee");
  print(string{"ingee"});

  cout << "\nbye~~\n";
}
