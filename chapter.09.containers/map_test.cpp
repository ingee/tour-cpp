#include <iostream>
#include <map>
#include <unordered_map>
#include <chrono>
#include <string>

using namespace std;
using namespace std::chrono;


int main(int argc, const char* argv[])
{
  cout << "hey~ " << argv[0] << ".\n";
  cout << "\t- compare map and unordered_map\n";
  cout << "\n";

  map<string, int> phone_book_map = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678},
    {"avid Hume", 123456},
    {"arl Popper", 234567},
    {"ertrand Arthur William Russell", 345678},
    {"vid Hume", 123456},
    {"rl Popper", 234567},
    {"rtrand Arthur William Russell", 345678}
  };
  string key = "Karl Popper";

  high_resolution_clock::time_point t1 = high_resolution_clock::now();
  int id = phone_book_map[key];
  high_resolution_clock::time_point t2 = high_resolution_clock::now();
  cout << fixed;
  cout << "key= " << key << ", id= " << id << "\n";
  duration<double> time_span = duration_cast<duration<double>>(t2 - t1);
  cout << "map consumes " << time_span.count() << " seconds\n";

  unordered_map<string, int> phone_book_umap = {
    {"David Hume", 123456},
    {"Karl Popper", 234567},
    {"Bertrand Arthur William Russell", 345678},
    {"avid Hume", 123456},
    {"arl Popper", 234567},
    {"ertrand Arthur William Russell", 345678},
    {"vid Hume", 123456},
    {"rl Popper", 234567},
    {"rtrand Arthur William Russell", 345678}
  };
  t1 = high_resolution_clock::now();
  id = phone_book_umap[key];
  t2 = high_resolution_clock::now();
  cout << "key= " << key << ", id= " << id << "\n";
  time_span = duration_cast<duration<double>>(t2 - t1);
  cout << "unordered_map consumes " << time_span.count() << " seconds\n";

  cout << "\nbye~\n";
}
