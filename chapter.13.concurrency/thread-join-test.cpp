#include <thread>
#include <iostream>

using namespace std;


void f() 
{ 
  for (int i=0; i<10; ++i)
    cout << "Hello\n"; 
}

struct F {
  void operator()() 
  { 
    for (int i=0; i<10; ++i)
      cout << "Parallel World!\n"; 
  }
};

void user()
{
  cout << "-- begin to spawn threads --\n";

  thread t1 {f};
  thread t2 {F()};

  t1.join();
  t2.join();

  cout << "-- all done --\n";
}

int main()
{
  user();
  return 0;
}
