#include <iostream>
//#include <stdlib.h>

using namespace std;

int main()
{
  int step = 0;

  cout << step++ << ": hello\n";
  cout << step++ << ": hello\n";
  terminate();
  //exit(0);
  cout << step++ << ": world\n";
}
