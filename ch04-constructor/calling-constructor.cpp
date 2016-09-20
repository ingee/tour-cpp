#include <iostream>
using namespace std;

class SomeType {
public:
  int value;
  SomeType() : value(0) { cout << "SomeType()\n"; }
  SomeType(int a) : value(a) { cout << "SomeType(a)\n"; }
};

int main()
{
  SomeType a;
  SomeType b(1);
  int i(0);
  int *pi = nullptr;
  int *pj = nullptr;

  cout << "a.value= " << a.value << "\n";
  cout << "b.value= " << b.value << "\n";
  cout << "i= " << i << "\n";
  cout << "pi= " << pi << ", pj= " << pj << "\n";
  cout << "(pi == pj)= " << (pi == pj) << "\n";
  cout << "(pi != pj)= " << (pi != pj) << "\n";
}
