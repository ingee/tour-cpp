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
  int ia[] = { 1,2,3,4,5,6,7,8,9,10 };
  const int iaSize = sizeof(ia)/sizeof(ia[0]);
  cout << "array[ " << iaSize << " ]= ";
  dump(ia, ia + iaSize);

  /*
  vector<int> va(iaSize);
  partial_sum(ia, ia+iaSize, va.begin());
  */
  vector<int> va;
  partial_sum(ia, ia+iaSize, back_inserter(va));
  cout << "partial_sum()= ";
  dump(va.begin(), va.end());
}

int main()
{
  f();
  return 0;
}
