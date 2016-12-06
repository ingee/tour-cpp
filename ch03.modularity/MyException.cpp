#include <iostream>
#include "MyException.h"

MyException::MyException()
{
  std::cout << "MyException( " << this << " ) created\n";
}

MyException::MyException(const MyException& e)
{
  std::cout << "MyException( " << this << " ) created and copy e( " << &e << " )\n";
}

MyException::~MyException()
{
  std::cout << "MyException( " << this << " ) destroyed\n";
}
