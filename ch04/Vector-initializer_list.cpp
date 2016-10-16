#include <initializer_list>
#include <algorithm>
#include <iostream>
#include "Vector-initializer_list.h"

Vector::Vector(std::initializer_list<double> lst)
  : elem{ new double[lst.size()] }, sz{ static_cast<int>(lst.size()) }
{
  std::copy(lst.begin(), lst.end(), elem);
}

int main()
{
  Vector v = {1, 2, 3, 4, 5.5};
  for (int i=0; i<v.sz; ++i)
    std::cout << i << ": " << v.elem[i] << "\n";
}
