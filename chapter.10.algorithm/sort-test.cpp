#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
#include "entry.h"

using namespace std;

template<typename T>
void dump(T container)
{
  for (auto i: container) {
    cout << i << ", ";
  }
  cout << "END\n";
}

template<typename T>
void sortAsc(T& container)
{
  sort(container.begin(), container.end());
  dump(container);
}

template<typename T>
void sortDsc(T& container)
{
  sort(container.begin(), container.end(), greater<int>());
  dump(container);
}

int main()
{
  cout << "hey~\n";
  cout << "sort algorithm test\n";

  vector<int> arr = { 0, 2, 4, 3, 1, 5 };

  cout << "\nsort ascending vector<int> { 0, 2, 4, 3, 1, 5 }\n";
  sortAsc(arr);

  cout << "\nsort descending vector<int> { 0, 2, 4, 3, 1, 5 }\n";
  sortDsc(arr);
  
  cout << "\nsort ascending string { \"hello world\" }\n";
  string s = "hello world";
  sortAsc(s);

  vector<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678}
  };

  cout << "\nsort ascending vector<Entry> { David, Karl, Bertrand }\n";
  sortAsc(phone_book);

  cout << "\nbye~\n";
}
