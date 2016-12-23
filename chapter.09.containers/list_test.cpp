#include <iostream>
#include <list>
#include "entry.h"

using namespace std;


void print_book(const list<Entry>& lst)
{
  for ( auto p = lst.begin();
        p != lst.end();
        ++p ) {
    cout << *p << "\n";
  }
}

int main(int argc, const char* argv[])
{
  cout << "hey~ " << argv[0] << ".\n";
  cout << "\t- method to iterate list-container.\n";
  cout << "\n";

  list<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678}
  };

  print_book(phone_book);

  cout << "\nbye~\n";
}
