#include <iostream>
#include <cmath>
#include "Vector.h"
#include "MyException.h"

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

  cout << "-- calling sqrt_sum() test --\n";
  cout << "enter number 3 times\n";
  for (int i=0; i!=v.size(); i++)
    cin >> v[i];
  cout << "sqrt_sum of v[]= " << sqrt_sum(v) << '\n';

  cout << "\n-- out_of_range at [] operator test --\n";
  try {
    v[v.size()] = 7;
  } 
  catch (out_of_range e) {
    cout << "out_of_range: " << e.what() << '\n';
  }

  cout << "\n-- out_of_range at construcgtor test --\n";
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

  cout << "\n-- custom exception test --\n";
  try {
    Vector v(1);
    throw MyException{};
  }
  catch (MyException e) {
    cout << "catch MyException\n";
  }
}
