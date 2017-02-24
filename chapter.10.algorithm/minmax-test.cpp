#include <iostream>
#include <algorithm>
#include <typeinfo>

int main()
{
  auto result = std::minmax({1, 2, 3, 4, 5});
  std::cout << "minmax({1,2,3,4,5})= ";
  std::cout << result.first << "," << result.second << '\n';

  using namespace std;
  const type_info& ti = typeid(result);
  cout << "typeid(std::minmax({...}))= " << ti.name() << '\n';
}
