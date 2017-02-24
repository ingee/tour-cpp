#include <iostream>
#include <algorithm>
#include <array>
#include <random>
#include <chrono>

int main()
{
  std::array<int, 5> foo {1,2,3,4,5};

  std::cout << "foo's orinal state: ";
  for (auto i: foo)
    std::cout << i << ",";
  std::cout << "END\n";

  unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
  shuffle(foo.begin(), foo.end(), std::default_random_engine(seed));

  std::cout << "foo's state after suffle(): ";
  for (auto i: foo)
    std::cout << i << ",";
  std::cout << "END\n";

  return 0;
}
