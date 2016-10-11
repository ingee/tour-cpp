#include <iostream>
#include <string>
using namespace std;

class MyException {
private:
  string msg;

public:
  MyException(string s) : msg{s} {
    hello();
  }
  ~MyException() {
    msg.clear();
    cout << "~MyException()\n";
  }
  void hello() {
    cout << this << ", msg= " << msg << '\n';
  }
};

void f()
{
  cout << "f() is about to throw MyException\n";
  throw MyException {"hello"};
}

void g()
{
  cout << "g() is about to call f()\n";
  f();
}

int main()
{
  try 
  {
    g();
  } 
  catch (MyException& e) {
    cout << "main catched MyException&\n";
    e.hello();
  } 
  /*
  catch (MyException e) {
    cout << "main catched MyException\n";
    e.hello();
  }
  */
}
