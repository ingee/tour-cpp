#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, const char* argv[])
{
  cout << "hey~ " << argv[0] << ".\n";
  cout << "\tcout formatting test.\n";
  cout << '\n';

  cout << 1234 << ',' << hex << 1234 << ',' << oct << 1234 << '\n';

  int n = 1234;
  double d = 1234.1234;
  cout << hex << n << ", " << d << ", " << n << ", " << d << "\n";
  cout << oct << n << ", " << d << ", " << n << ", " << d << "\n";
  cout << dec << fixed << n << ", " << d << ", " << n << ", " << d << "\n";

  cout << setbase(16) << n << ", " << n << "\n";

  cout << "bye~\n";
}
