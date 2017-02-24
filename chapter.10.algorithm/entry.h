#ifndef _INGEE_ENTRY_H_
#define _INGEE_ENTRY_H_

#include <iostream>
#include <string>

struct Entry {
  std::string name;
  int number;
};

std::ostream& operator<<(std::ostream& os, const Entry& e);
std::istream& operator>>(std::istream& is, Entry& e);
bool operator<(const Entry& a, const Entry& b);

#endif //_INGEE_ENTRY_H_
