#include "Vector.h"
#include <iostream>
#include <cmath>

using namespace std;

double sqrt_sum(Vector& v)
{
  double sum = 0;
  for (int i=0; i!=v.size(); ++i)
    sum += sqrt(v[i]);
  return sum;
}

int main()
{
  Vector v(3);

  cout << "enter number 3 times\n";
  for (int i=0; i!=v.size(); i++)
    cin >> v[i];
  cout << "sqrt_sum of v[]= " << sqrt_sum(v) << '\n';

  try {
    v[v.size()] = 7;
  } 
  catch (out_of_range e) {
    cout << "out_of_range: " << e.what() << '\n';
  }

  try {
    Vector v(-27);
  } 
  catch (out_of_range e) {
    cout << "out_of_range: " << e.what() << '\n';
  }
  catch (length_error e) {
    cout << "length_error: " << e.what() << '\n';
  }
  catch (bad_alloc e) {
    cout << "bad_alloc: " << e.what() << '\n';
  }
}
