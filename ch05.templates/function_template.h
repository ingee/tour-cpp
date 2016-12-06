#include <iostream>

template<typename Container>
void write(Container c)
{
  std::cout << "container[ " << c.size() << " ]= { ";
  auto& last = *(--c.end());
  for (auto& v: c) {
    std::cout << v;
    if (&v != &last)
      std::cout << ", ";
  }
  std::cout << " }\n";
}

template<typename Container, typename Value>
Value sum(const Container& c, Value v)
{
  for (auto x: c) {
    v+=x;
  }
  return v;
}
