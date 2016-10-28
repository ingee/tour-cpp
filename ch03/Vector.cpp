#include <iostream>
#include <stdexcept>
#include "Vector.h"

using namespace std;

Vector::Vector(int s)
{
  cout << "Vector::Vector( " << s << " )\n";
  if (s<0)
    throw length_error{"Vector constructor: negative size"};
  elem = new double[s];
  sz = s;
}

Vector::~Vector()
{
  cout << "Vector::~Vector( elem=" << elem << ", sz=" << sz << " )\n";
  delete elem;
}

double& Vector::operator[](int i)
{
  if (i<0 || size()<=i)
    throw out_of_range{"Vector::operator[]"};
  return elem[i];
}

int Vector::size()
{
  return sz;
}
