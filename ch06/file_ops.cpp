#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void printLine(int i, string& str)
{
  cout << setfill('0') << setw(2) << i << ": " 
    << str << ": " 
    << str.length() << '\n';
}

int main()
{
  cout << "hello, fstream~\n";
  cout << "I'll open text file and test about Korean text handling\n";
  cout << "  - if c++ fails to open file, it thows exception? -> no.\n";
  cout << "  - can c++ opens Korean named file? -> yes.\n";
  cout << "  - can c++ reads Korean encoded text? can count it?\n";
  cout << "     -> yes@mac.\n";
  cout << "     -> no@win. characters are not printed/decoded correctly.\n";
  cout << "\n";

  try {
    string fileNameArr[] = { "text-file-utf8.txt", "헬로 파일-utf8.txt" };
    for (auto fileName: fileNameArr) {
      cout << "try to open file: " << fileName << "\n";

      ifstream myfile(fileName);
      if (myfile.is_open()) {
        string str;
        for (int i=0; getline(myfile, str); ++i) {
          printLine(i, str);
        }
      }
    }
  }
  catch (exception e) {
    cout << "exception catched.\n";
    cout << e.what() << "\n";
  }
  catch (...) {
    cout << "something catched.\n";
  }

  cout << "\nbye, fstream~\n";
}
