#include <vector>
#include <list>
#include <string>
#include <iostream>

using namespace std;


//1st version: handle <string> type only
//
vector<string::iterator> find_all(string& s, char c)
{
  cout << "find_all() 1st ver\n";

  vector<string::iterator> res;
  for (auto p = s.begin(); p != s.end(); ++p) {
    if (*p == c)
      res.push_back(p);
  }
  return res;
}

void test()
{
  string m {"Mary had a little lamb"};
  for (auto p : find_all(m, 'a')) {
    if (*p != 'a')
      cerr << "a bug!\n";
  }
}

//2nd: generalized version
//
template<typename C, typename V>
vector<typename C::iterator> find_all(C& c, V v)
{
  cout << "find_all() 2nd ver\n";

  vector<typename C::iterator> res;
  for (auto p = c.begin(); p != c.end(); ++p) {
    if (*p == v)
      res.push_back(p);
  }
  return res;
}

void test2()
{
  string m{"Marry had a little lamb"};
  for (auto p: find_all(m, 'a')) {
    if (*p != 'a')
      cerr << "string bug!\n";
  }

  list<double> ld {1.1,2.2,3.3,1.1};
  for (auto p: find_all(ld, 1.1)) {
    if (*p != 1.1)
      cerr << "list bug!\n";
  }

  vector<string> vs{"red","blue","green","green","orange","green"};
  for (auto p: find_all(vs, "red")) {
    if (*p != "red")
      cerr << "vector bug!\n";
  }

  for (auto p: find_all(vs, "green")) {
    *p = "vert";
  }
  for (auto s: vs) 
    cout << s << ",";
  cout << "END\n";
}

int main()
{
  test();
  test2();
  return 0;
}
