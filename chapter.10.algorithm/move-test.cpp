#include <iostream> //std::cout
#include <algorithm>  //std::move (ragnes)
#include <utility>  //std::move (objects)
#include <vector> //std::vector
#include <string> //std::string

using namespace std;

template<typename Container>
void dump(Container c)
{
  for (auto i: c) {
    cout << '[' << i << "], ";
  }
  cout << "END\n";
}

int main()
{
  vector<string> foo = {"air", "water", "fire", "earth"};
  vector<string> bar(4);

  cout << "foo= "; dump(foo);
  cout << "bar= "; dump(bar);
  cout << '\n';


  //moving ranges:
  cout << "Moving ranges... ";
  cout << "move(foo.begin(), foo.end(), bar.begin())\n";
  move(foo.begin(), foo.end(), bar.begin());

  cout << "foo contains " << foo.size() << " elements: "; dump(foo);
  cout << "(each in an unspecified but valid state)\n";
  cout << "bar contains " << bar.size() << " elements: "; dump(bar);
  cout << '\n';


  //moving container:
  cout << "Moving container... ";
  cout << "foo = move(bar);\n";
  foo = move(bar);

  cout << "foo contains " << foo.size() << " elements: "; dump(foo);
  cout << "bar contains " << bar.size() << " elements: "; dump(bar);
  cout << "(bar is in an unspecified but valid state)\n";
}
