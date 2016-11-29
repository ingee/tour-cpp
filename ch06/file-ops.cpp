#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
  cout << "hello, fstream~\n";
  cout << "I'll open text file and test about Korean text handling\n";
  cout << "  - if c++ fails to open file, it thows exception? -> no.\n";
  cout << "  - can c++ opens Korean named file? -> yes.\n";
  cout << "  - can c++ reads Korean encoded text? can count it? -> yes.\n";

  try {
    cout << "try to open file.\n";

    //ifstream myfile("text-file-utf8.txt");
    ifstream myfile("헬로 파일.txt");
    if (myfile.is_open()) {
      string str;
      for (int i=0; getline(myfile, str); ++i) {
          cout << setfill('0') << setw(2) << i << ": " 
            << str << ": " 
            << str.length() << '\n';
      }
    }
  }
  catch (exception e) {
    cout << "exception catched.\n";
  }
  catch (...) {
    cout << "something catched.\n";
  }

  cout << "bye, fstream~\n";
}
