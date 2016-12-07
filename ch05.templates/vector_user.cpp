#include <iostream>
#include <list>
#include "vector.h"

using namespace std;

void write(const Vector<string>& vs)
{
  cout << "-- enter write() --\n";

  // normal loop
  cout << "-- ordinary-for loop\n";
  for (int i=0; i!=vs.size(); ++i)
    cout << vs[i] << '\n';

  // loop which can be used after define begin() and end()
  cout << "-- range-for loop\n";
  for (auto& s: vs)
    cout << s << '\n';

  cout << "-- leave write() --\n";
}

int main()
{
  cout << "hey~ main() will instantiate 3 Vector instances.\n";

  Vector<char> vc(200);
  Vector<string> vs(3);
  Vector<list<int>> vli(45);

  vs[0] = "hello";
  vs[1] = "world";
  write(vs);

  cout << "bye~\n";
}
