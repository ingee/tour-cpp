#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <fstream>

using namespace std;

void printStr(const string& s)
{
  cout << "s= " << s << "\n";
  int len = s.length();
  cout << "s.length()= " << len << "\n";
  for (int i=0; i<len; ++i) {
    unsigned char c = s[i];
    printf("[%d] %c : 0x%02x, %d\n", i, c, c, c);
  }
}

int main(int argc, const char* argv[])
{
  cout << "hello, " << argv[0] << "\n";
  cout << "what is different between a UTF-8 string written in source code\n";
  cout << " and a UTF-8 string read from UTF-8 text file?\n";
  cout << " - are the byte-stream of both strings same?\n";
  cout << "   -> no, different.\n";
  cout << "   -> string from UTF-8 text file is definitely UTF-8\n";
  cout << "\n";

  string s;
  int len;
  char c;

  cout << "--- from src-code \"abc\"\n";
  s = "abc";
  printStr(s);

  cout << "--- from src-code \"가나다\"\n";
  s = "가나다";
  printStr(s);
  cout << "bye, " << argv[0] << "\n";

  cout << "--- from utf8-text-file\n";
  ifstream ifs("oneline-utf8.txt");
  if (ifs) {
    if (getline(ifs, s)) {
      printStr(s);
    }
  }
}
