#include <bitset>
#include <iostream>
#include <string>

using namespace std;

void binary(int i)
{
  bitset<300> b = i;
  cout << sizeof b << '\n';
  cout << b << '\n';
}

int main()
{
  binary(0);
  binary(1);
  binary(0xf);
  binary(0xf0);

  cout << "---\n";
  binary(1 << 4);
  binary(0xf << 4);
  binary(0xf0 << 4);
  return 0;
}
