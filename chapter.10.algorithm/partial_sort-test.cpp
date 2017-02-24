#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
  vector<int> myvector = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  partial_sort(myvector.begin(), myvector.begin()+5, myvector.end());

  cout << "myvector contains after partial_sort(begin(), begin()+5, end()):";
  for (auto& i: myvector)
    cout << ' ' << i;
  cout << '\n';
  return 0;
}
