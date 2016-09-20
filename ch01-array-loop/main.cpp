#include <iostream>

using namespace std;

int main()
{
  int v1[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
  int v2[10];

  cout << "loop with \'for (auto i=0; i!=10; i++)\' ..." << endl;
  for (auto i=0; i!=10; i++) {
    v2[i] = v1[i];
    cout << "i= " << i << ", v= " << v1[i] << endl;
  }

  cout << endl;
  cout << "loop with \'for (auto x : v)\' ..." << endl;
  for (auto x : v1) {
    cout << "x= " << x << endl;
  }
}
