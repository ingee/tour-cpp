#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double PI = 3.141592;


int main(int c, const char* argv[])
{
  cout << "hey~\n";
  cout << argv[0] << " will test cout-formatting features\n";
  cout << "\n";

//setw(), setfill()
//

  cout << "setw(10)---\n";
  for (int i=0; i<10; ++i) {
    cout << i;
  }
  cout << '\n';
  cout << setw(10);
  for (int i=0; i<3; ++i) {
    cout << i << '\n';
  }

  string sa[] { "abc", "de", "f" };
  cout << setw(10);
  for (auto s: sa) {
    cout << s << '\n';
  }

  cout << setw(10) << "hello" <<"hey" << "hey\n";
  cout << '\n';
  cout << setfill('-') << setw(80) << '\n';

//setprecision(), setbase()
//

  cout << "pi with setprecision(2)= " << setprecision(2) << PI << '\n';
  cout << "pi with setprecision(3)= " << setprecision(3) << PI << '\n';
  cout << "pi*10 with setprecision(2)= " << setprecision(2) << PI*10 << '\n';
  cout << "pi*10 with setprecision(3)= " << setprecision(3) << PI*10 << '\n';
  cout << "pi*100 with setprecision(2)= " << setprecision(2) << PI*100 << '\n';
  cout << "pi*100 with setprecision(3)= " << setprecision(3) << PI*100 << '\n';

  cout << "setbase(10), 15= " << setbase(10) << 15 << '\n';
  cout << "setbase(16), 15= " << setbase(16) << 15 << '\n';
  cout << "setbase(8), 15= " << setbase(8) << 15 << '\n';
  cout << "setbase(3), 15= " << setbase(3) << 15 << '\n';
  cout << "setbase(2), 15= " << setbase(2) << 15 << '\n';
  cout << "\nbye~\n";
}
