#include <iostream>
#include <string>

using namespace std;

void hello()
{
  cout << "hello()\n";
  cout << "Please enter your name\n";
  string str;
  cin >> str;
  cout << "Hello, " << str << "!\n";
}

void hello_line()
{
  cout << "hello_line()\n";
  cout << "Please enter your name\n";
  string str;
  getline(cin, str);
  cout << "Hello, " << str << "!\n";
}

int main(int c, const char* argv[])
{
  cout << "hey~ this is " << argv[0] << ".\n";
  cout << "\t- test cin.\n";
  cout << "\n";

  hello();
  hello_line();

  cout << "\nbye~\n";
}
