#include <iostream>

void f() 
{ 
  std::cout << "end!\n"; 
}

template<typename T>
void g(T x)
{
  std::cout << x << " ";
}

template<typename T, typename... Tail>
void f(T head, Tail... tail)
{
  g(head);
  f(tail...);
}
