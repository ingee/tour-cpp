//
//5.5 Function Object
//

#include <iostream>
#include <vector>
#include <list>
#include "functor.h"

using namespace std;

void callLessThan()
{
  cout << "-- enter callLessThan() --\n";

  LessThan<int> lti {42};
  cout << "LessThan<int> lts{42}\n";
  cout << "lti(10)= " << lti(10) << ", lti(50)= " << lti(50) << "\n";

  LessThan<string> lts {"Backus"};
  cout << "LessThan<string> lts{\"Backus\"}\n";
  cout << "lts(\"Abc\")= " << lts("Abc") << ", lts(\"Zbc\")= " << lts("Zbc") << "\n";

  cout << "-- leave callLessThan() --\n";
}

void countContainer()
{
  cout << "\n-- enter countContainer() --\n";

  vector<int> vec = { 0, 1, 2, 3, 4 };
  list<string> lst = { "a", "bc", "def", "ghij", "klmno" };
  int x = 2;
  string s = "ddd";

  dumpContainer(vec);
  cout << "number of values less than " << x
    << ": " << count(vec, LessThan<int>{x})
    << "\n";
  
  dumpContainer(lst);
  cout << "number of values less than " << s
    << ": " << count(lst, LessThan<string>{s})
    << "\n";

  cout << "-- leave countContainer() --\n";
}
  
void countContainerWithLamda()
{
  cout << "\n-- enter countContainerWithLamda() --\n";

  vector<int> vec = { 0, 1, 2, 3, 4 };
  list<string> lst = { "a", "bc", "def", "ghij", "klmno" };
  int x = 2;
  string s = "ddd";

  dumpContainer(vec);
  cout << "number of values less than " << x
    << ": " << count(vec, [&](int a){ return a<x; })
    << "\n";
  
  dumpContainer(lst);
  cout << "number of values less than " << s
    << ": " << count(lst, [&](const string& a){ return a<s; })
    << "\n";

  cout << "-- leave countContainerWithLamda() --\n";
}

int main()
{
  callLessThan();
  countContainer();
  countContainerWithLamda();
}
