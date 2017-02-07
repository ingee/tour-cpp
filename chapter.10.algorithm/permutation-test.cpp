#include <iostream>   //cout
#include <algorithm>  //next_permutation, sort

using namespace std;


void next_permutation_test()
{
  int myints[] = {2, 3, 1};

  sort(myints, myints+3);

  cout << "3! possible permutations with 3 elements:\n";
  do {
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while (next_permutation(myints, myints+3));

  cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
}

void prev_permutation_test()
{
  int myints[] = {2, 3, 1};

  sort(myints, myints+3);
  reverse(myints, myints+3);

  cout << "3! possible permutations with 3 elements:\n";
  do {
    cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
  } while (prev_permutation(myints, myints+3));

  cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
}

int main()
{
  cout << "next_permutation()===\n";
  next_permutation_test();
  cout << "\n";

  cout << "prev_permutation()===\n";
  prev_permutation_test();
}
