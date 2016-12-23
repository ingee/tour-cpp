#include <iostream>
#include <vector>
#include "entry.h"

using namespace std;

//vector iteration
//

void print_book(const vector<Entry>& book)
{
  //for (int i=0; i!=book.size(); ++i)
  //  cout << book[i] << '\n';
  for (auto& e : book)
    cout << e << '\n';
}

//vector range check
//

void silly(vector<Entry>& book)
{
  try {
    int i = book[book.size()].number;
    cout << "book[book.size()].number= " << i << "\n";
  }
  catch (...) {
    cout << "exception thrown\n";
  }
}

template<typename T>
class Vec : public std::vector<T> {
public:
  using vector<T>::vector;
  T& operator[](int i)
    { return vector<T>::at(i); }
  const T& operator[](int i) const
    { return vector<T>::at(i); }
};

void checked(Vec<Entry>& book)
{
  try {
    int i = book[book.size()].number;
    cout << "book[book.size()].number= " << i << "\n";
  }
  catch (out_of_range& e) {
    cout << "out_of_range exception thrown\n";
    cout << '\t' << e.what() << '\n';
  }
  catch (...) {
    cout << "exception thrown\n";
  }
}

int main(int argc, const char* argv[])
{
  cout << "hey~ " << argv[0] << ".\n";
  cout << "\t- method to iterate vector-container.\n";
  cout << "\t- range check feature of vector-container.\n";
  cout << "\n";

  //vector<Entry> phone_book = {
  Vec<Entry> phone_book = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678}
  };

  print_book(phone_book);
  silly(phone_book);
  checked(phone_book);

  cout << "\nbye~\n";
}
