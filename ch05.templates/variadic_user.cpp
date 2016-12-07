#include "variadic.h"

using namespace std;

int main()
{
  cout << "first:\n";
  f(1, 2.2, "hello");

  cout << "second:\n";
  f(0.2, 'c', "yuck!", 0, 1, 2);
}
