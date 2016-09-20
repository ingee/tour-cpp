#include <iostream>
using namespace std;

class Int {
public:
  Int() : val(0) { cout << "Int()\n"; }
  Int(int a) : val((int*)a) { cout << "Int(int " << a << ")\n"; }
  Int(const Int& a) : val(a.val+10) { cout << "Int(Int& " << a.val << ")\n"; }
  Int(Int&& a) : val(a.val+20) { cout << "Int(Int&& " << a.val << ")\n"; }

  ~Int() { cout << "~Int(" << val << ")\n"; }

public:
  int* val;
};

Int func(const Int& a, const Int& b)
{
  cout << "enter func(a, b)\n";
  Int c;
  c.val = (int*)((long)a.val + (long)b.val);
  cout << "before return function(a, b)\n";
  return c;
  cout << "leave func(a, b)\n";
}

int main()
{
  Int c;
  Int a(1), b(2);
  c = func(a, b);
  cout << "result.val= " << c.val << "\n";

  /*
  Int copy(res);
  cout << "copy.val= " << copy.val << "\n";
  */
}
