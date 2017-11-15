#include <iostream>
#include <complex>
#include <vector>
#include <typeinfo>

using namespace std;

int main()
{
  double d1 = 2.3;
  double d2 {2.3};
  cout << "d1= " << d1 << ", d2= " << d2 << "\n";

  complex<double> z = 1;
  complex<double> z2 {d1, d2};
  complex<double> z3 = {1, 2};
  cout << "z= " << z << ", z2= " << z2 << ", z3= " << z3 << "\n";

  vector<int> v {1,2,3,4,5,6};
  cout << "v= [ ";
  for (auto i: v)
    cout << i << ", ";
  cout << "size= " << v.size() << " ]\n";

  int i1 = 7.8;
  //int i2 {7.8}; //compile error! different type
  //int i3 = {7.8}; //compile error! different type

  auto b = true;
  auto ch = 'x';
  auto i = 123;
  auto d = 1.2;
  cout << "b= " << b 
    << ", typeid(b).name()= " << typeid(b).name() 
    << ", sizeof(b)= " << sizeof(b) << "\n";
  cout << "ch= " << ch 
    << ", typeid(ch).name()= " << typeid(ch).name()
    << ", sizeof(ch)= " << sizeof(ch) << "\n";
  cout << "i= " << i 
    << ", typeid(i).name()= " << typeid(i).name()
    << ", sizeof(i)= " << sizeof(i) << "\n";
  cout << "d= " << d 
    << ", typeid(d).name()= " << typeid(d).name()
    << ", sizeof(d)= " << sizeof(d) << "\n";

  auto f = float{0.1};
  cout << "f= " << f 
    << ", typeid(f).name()= " << typeid(f).name()
    << ", sizeof(f)= " << sizeof(f) << "\n";
}
