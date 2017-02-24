#include <iostream>
#include <string>
#include <iterator>

using namespace std;

ostream_iterator<string> oo { cout };

int main()
{
  *oo = "Hello,";
  ++oo;
  *oo = "World!\n";

  return 0;
}
