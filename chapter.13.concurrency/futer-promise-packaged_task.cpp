//to build
//  - @Ubuntu: g++ -std=c++11 -pthread <this-source-file>
//  - @Win10: cl /EHsc <this-source-file>
//

#include <future>
#include <thread>
#include <numeric>
#include <vector>
#include <iostream>

using namespace std;


double accum(double* bgn, double* end, double init)
{
  return accumulate(bgn, end, init);
}

double comp(vector<double>& v)
{
  using Task_type = double(double*, double*, double);

  packaged_task<Task_type> pt0 {accum};
  packaged_task<Task_type> pt1 {accum};

  future<double> f0 {pt0.get_future()};
  future<double> f1 {pt1.get_future()};

  double* first = &v[0];
  thread t1 {move(pt0), first, first+v.size()/2, 0.0};
  thread t2 {move(pt1), first+v.size()/2, first+v.size(), 0.0};

  return f0.get() + f1.get();
}

int main()
{
  vector<double> vd {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  double result = comp(vd);
  cout << "result= " << result << "\n";

  return 0;
}
