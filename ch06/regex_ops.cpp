#include <iostream>
#include <cstdio>
#include <string>
#include <regex>

using namespace std;

int main(int argc, const char* argv[])
{
  cout << "hey~\n";
  cout << "regex test\n";
  cout << "  - check C++ regex syntax\n";
  cout << "  - compare with JS regex syntax\n";
  cout << "\n";

  printf("type any string. %s will find US-postal-code.\n", argv[0]);
  cout << "to quit type CTRL+Z (@win) or CTRL+D (@unix).\n";

  regex pat {R"(\w{2}\s*\d{5}(-\d{4})?)"};
  int lineno = 0;
  for (string line; getline(cin, line); ++lineno) {
    smatch matches;
    if (regex_search(line, matches, pat)) {
      cout << lineno << ": " << matches[0] 
        << ", matches.size()= " << matches.size() << "\n";
    }
    else {
      cout << lineno << ": no match\n";
    }
  }

  cout << "bye~\n";
}
