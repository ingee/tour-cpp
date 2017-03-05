#include <numeric>
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


template<typename Iterator>
void dump(Iterator begin, Iterator end)
{
  for (Iterator it = begin; it != end; ++it)
    cout << *it << ',';
  cout << "END\n";
}

void f()
{
  int ia[] = { 1,4,9,16,25 };
  const int iaSize = sizeof(ia)/sizeof(ia[0]);
  cout << "array[ " << iaSize << " ]= ";
  dump(ia, ia + iaSize);

  vector<int> va;
  adjacent_difference(ia, ia+iaSize, back_inserter(va));
  cout << "adjacent_difference()= ";
  dump(va.begin(), va.end());
}

int main()
{
  f();
  return 0;
}
