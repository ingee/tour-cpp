#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int a[] = { 1,2,3,4,4,4 };
  int b[] = { 4,5,6,7,8,9 };

  vector<int> v(10);
  auto it = set_union(a, a+3, b, b+3, v.begin());
  v.resize(it - v.begin());

  cout << "v has " << v.size() << " elements\n";
  for (auto i: v) {
    cout << i << ",";
  }
  cout << "END\n";

  return 0;
}
