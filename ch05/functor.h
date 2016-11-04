//
//5.5 Function Object
//

#include <iostream>

using namespace std;

template<typename T>
class LessThan {
  const T val;
public:
  LessThan(const T& v) : val(v) {}
  bool operator()(const T& x) const { return x<val; }
};

template<typename C, typename P>
int count(const C& c, P pred)
{
  int cnt = 0;
  for (const auto& x : c)
    if (pred(x))
      ++cnt;
  return cnt;
}

template<typename C>
void dumpContainer(const C& c)
{
  cout << "container[ " << c.size() << " ]= { ";
  const auto& last = *(--c.end());
  for (const auto& v : c) {
    cout << v;
    if (v != last)
      cout << ",";
  }
  cout << " }\n";
}
