#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <exception>

bool myfunc(int i, int j)
{
  return (i == j);
}

int main()
{
  int myints[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5 };
  std::vector<int> haystack(myints, myints+10);

  int needle1[] = { 1, 2, 3 };

//
//find_end() algorithm
//
  std::cout << "find_end( {1,2,3} ) in {1,2,3,4,5,1,2,3,4,5}\n";
  std::vector<int>::iterator it;
  it = std::find_end(haystack.begin(), haystack.end(), needle1, needle1+3);
  if (it != haystack.end())
    std::cout << "=> needle1 found at position " << (it-haystack.begin()) << '\n';

//
//search() algorithm
//
  std::cout << "search( {1,2,3} ) in {1,2,3,4,5,1,2,3,4,5}\n";
  it = std::search(haystack.begin(), haystack.end(), needle1, needle1+3);
  if (it != haystack.end())
    std::cout << "=> needle1 found at position " << (it-haystack.begin()) << '\n';

//
//iteration ops.
//
  std::cout << "advacne( last, 10 )\n";
  it = haystack.end();
  try {
    std::advance(it, 10);
  }
  catch (std::exception& e) {
    std::cout << e.what() << '\n';
  }
  std::cout << "=> it(iterator) is advanced from BEGIN{1,2,3,4,5,1,2,3,4,5,} as " 
    << std::distance(haystack.begin(), it) << '\n';
  std::cout << "=> *it = " << *it << '\n';
  std::cout << "=> advance() does not guarantee iterator's safety\n";
}
