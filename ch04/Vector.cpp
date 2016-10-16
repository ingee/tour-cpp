#include <iostream>
#include <stdexcept>
#include <memory>
#include "Vector.h"

using namespace std;


//
// ch04. copy operators
//

Vector::Vector(const Vector& a) //copy constructor
  : elem{new double[a.sz]}
  , sz{a.sz}
{
  cout << "Vector copy constructor\n";
  for (int i=0; i!=sz; ++i)
    elem[i] = a.elem[i];
}

Vector& Vector::operator=(const Vector& a) //copy assignment
{
  cout << "Vector copy=()\n";
  double* p = new double[a.sz];
  for (int i=0; i!=a.sz; ++i)
    p[i] = a.elem[i];
  delete[] elem;
  elem = p;
  sz = a.sz;
  return *this;
}


//
// ch04. move operators
//

Vector::Vector(Vector&& a) //move constructor
  : elem{a.elem}
  , sz{a.sz}
{
  cout << "Vector move costructor\n";
  a.elem = nullptr;
  a.sz = 0;
}

Vector& Vector::operator=(Vector&& a) //move assignment
{
  cout << "Vector move=()\n";
  delete[] elem;
  elem = a.elem;
  sz = a.sz;
  a.elem = nullptr;
  a.sz = 0;
  return *this;
}


//
// ch04. constructor using initializer_list
//

//Vector::Vector(std::initializer_list<double> lst)
//  : elem{ new double[lst.size()] }, sz{ static_cast<int>(lst.size()) }
//{
//  std::copy(lst.begin(), lst.end(), elem);
//}


//
// ch03 implementations
//

Vector::Vector(int s)
{
  cout << "Vector constructor Vector(int= " << s << ") is called\n";
  if (s<0)
    throw length_error{"Vector constructor: negative size"};
  elem = new double[s];
  sz = s;
}

const double& Vector::operator[](int i) const
{
  if (i<0 || size()<=i)
    throw out_of_range{"Vector::operator[]"};
  return elem[i];
}

double& Vector::operator[](int i)
{
  if (i<0 || size()<=i)
    throw out_of_range{"Vector::operator[]"};
  return elem[i];
}

int Vector::size() const
{
  return sz;
}


//
// user code
//

Vector f()
{
  cout << "f()-->\n";
  int step = 0;

  cout << "f() step: " << step++ << "\n";
  Vector x(1000);

  cout << "f() step: " << step++ << "\n";
  Vector y(1000);

  cout << "f() step: " << step++ << "\n";
  Vector z(1000);

  cout << "f() step: " << step++ << "\n";
  z = x;

  cout << "f() step: " << step++ << "\n";
  y = std::move(x);

  cout << "<--f()\n";
  return z;
}

int main()
{
  cout << "main()-->\n";
  Vector a = f();
  cout << "<--main()\n";
}
