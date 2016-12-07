#include <iostream>
#include <cstdio>
#include <string>
#include <regex>

using namespace std;

void dumpMatches(const smatch& matches)
{
  int size = matches.size();
  cout << "matches.size()= " << size << ", [ ";
  for (int i=0; i<size; ++i) {
    const string& s = matches[i];
    cout << "\'" << s << "\'";
    if (i < size-1) {
      cout << ", ";
    }
  }
  cout << " ]\n";
}

int main(int argc, const char* argv[])
{
  cout << "hey~\n";
  cout << "regex test\n";
  cout << "  - check C++ regex syntax\n";
  cout << "  - compare with JS regex syntax => exactly same.\n";
  cout << "\n";

  string regexPatternStr {R"(\w{2}\s*\d{5}(-\d{4})?)"};
  regex pat {regexPatternStr};

  printf( "type any string. %s will find US-postal-code.\n", argv[0]);
  cout << "regex pattern= " << regexPatternStr << "\n";
  cout << "to quit type CTRL+Z (@win) or CTRL+D (@unix).\n";

  int lineno = 0;
  for (string line; getline(cin, line); ++lineno) {
    smatch matches;
    if (regex_search(line, matches, pat)) {
      dumpMatches(matches);
    }
    else {
      cout << lineno << ": no match\n";
    }
  }

  cout << "bye~\n";
}
