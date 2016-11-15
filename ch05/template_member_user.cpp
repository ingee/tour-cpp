#include <iostream>
#include "template_member.h"

using namespace std;

int main()
{
  AClass<int> a;
  BClass<int> b;

  a.hello = b.hello = 10;
  cout << "a.hello= " << a.hello << "\n";
  cout << "b.hello= " << b.hello << "\n";
}
