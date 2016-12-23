#include <vector>
template<typename C>
using Element_type = typename C::value_type;

template<typename Container>
void algo(Container& c)
{
  std::vector<Element_type<Container>> vec;
  //...
}
