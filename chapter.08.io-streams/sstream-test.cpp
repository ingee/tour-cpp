#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
  ostringstream oss;
  oss << "{temperature," << scientific << 123.4567890 << "}";
  cout << oss.str() << "\n";
}
