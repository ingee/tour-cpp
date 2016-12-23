#include <iostream>

using namespace std;

class Negative_size {
public:
  Negative_size() {}
};

template<typename T>
class Vector {
private:
  T* elem;
  int sz;
public:
  explicit Vector(int s);
  ~Vector();

  T& operator[](int i);
  const T& operator[](int i) const;
  int size() const { return sz; }

  T* begin() const;
  T* end() const;
};

//
// template implementation should be in header
//

template<typename T>
Vector<T>::Vector(int s)
{
  cout << "Vector::Vector( " << s << " )\n";

  if (s<0)
    throw Negative_size{};
  elem = new T[s];
  sz = s;
}

template<typename T>
Vector<T>::~Vector() 
{
  cout << "Vector::~Vector(), sz= " << sz << "\n";
  delete[] elem;
}

template<typename T>
T& Vector<T>::operator[](int i)
{
  cout << "Vector::operator[]( " << i << " )\n";

  if (i<0 || size()<=i)
    throw out_of_range{"Vector::operator[]"};
  return elem[i];
}

template<typename T>
const T& Vector<T>::operator[](int i) const
{
  cout << "Vector::operator[]( " << i << " ) const\n";

  if (i<0 || size()<=i)
    throw out_of_range{"Vector::operator[]"};
  return elem[i];
}

template<typename T>
T* Vector<T>::begin() const
{
  return sz? elem : nullptr;
}

template<typename T>
T* Vector<T>::end() const
{
  return elem+sz;
}
