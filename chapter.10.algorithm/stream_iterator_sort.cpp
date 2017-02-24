#include <iostream>
#include <fstream>
#include <string>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
  cout << "enter data (to quit enter CTRL+Z on Win, CTRL+D on Unix)\n";

  istream_iterator<string> ii {cin};
  istream_iterator<string> eos {};
  vector<string> data {ii, eos};

  cout << "input data: ";
  for (auto& s : data)
    cout << s << ",";
  cout << "END\n";

  sort(data.begin(), data.end());

  cout << "sorted data: ";
  for (auto& s : data)
    cout << s << ",";
  cout << "END\n";

  return 0;
}
