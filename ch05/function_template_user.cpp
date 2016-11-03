#include <iostream>
#include <typeinfo>
#include <vector>
#include <list>
#include <complex>
#include "function_template.h"

using namespace std;

int main()
{
  cout << "hey~\n";

  vector<int> vi = { 1, 2, 3, 4, 4 };
  list<double> ld = { 6, 7, 8, 9, 10 };
  vector<complex<double>> vc = { {1,1}, {2,2}, {3,3}, {4,4}, {5,5} };

  auto x = sum(vi, 0);
  cout << "\nsum(vector<int>, 0)= " << x << typeid(x).name() << "\n";
  write(vi);

  auto d = sum(vi, 0.0);
  cout << "\nsum(vector<int>, 0.0)= " << d << typeid(d).name() << "\n";
  write(vi);

  double dd = sum(ld, 0.0);
  cout << "\nsum(list<double>, 0.0)= " << dd << typeid(dd).name() << "\n";
  write(ld);

  auto z = sum(vc, complex<double>{0.0, 0.0});
  cout << "\nsum(vector<complex<double>>, complex<double>{0.0, 0.0})= " << z << "\n";
  write(vc);

  cout << "\nbye~\n";
}
