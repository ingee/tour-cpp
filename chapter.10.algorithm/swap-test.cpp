#include <iostream>
#include <utility>
#include <vector>

using namespace std;

template<typename IntContainer>
void dump(IntContainer c) {
  for (int i: c) {
    cout << i << ",";
  }
  cout << "END\n";
}

int main()
{
  cout << "== std::swap() test ==\n";
  cout << "\n";

  int x=10, y=20;
  swap(x, y);
  cout << "x=" << x << ",y=" << y << "\n";
  cout << "swap(x, y); x=" << x << ", y=" << y << "\n";
  cout << "\n";

  int foo[4];
  int bar[] = {10, 20, 30, 40};
  swap(foo, bar);
  cout << "foo[4], bar[]={10,20,30,40}\n";
  cout << "swap(foo, bar); foo[] = ";
  for (int i: foo) {
    cout << i << ",";
  }
  cout << "END\n";

  cout << "can std::swap() be used with std::vector? => OK\n";
  vector<int> v1(4, 10), v2(4, 20);
  cout << "v1= "; dump(v1);
  cout << "v2= "; dump(v2);
  swap(v1, v2);
  cout << "swap(v1, v2)\n";
  cout << "v1= "; dump(v1);
  cout << "v2= "; dump(v2);

/* but following codes result compile-error!

  int foo[] = {10, 20, 30, 40};
  vector<int> v(4,0);
  swap(foo, v);
*/
}
