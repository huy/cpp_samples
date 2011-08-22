#include <boost/lambda/lambda.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
using namespace boost::lambda;

void myfunc(int x){
  cout << x*3<< " ";
}

int main()
{
    istream_iterator<int> eos;      // end-of-stream iterator
    istream_iterator<int> it(cin);   // stdin iterator

    for_each<istream_iterator<int>,decltype(&myfunc)>(it, eos, myfunc); // explicit instantiation using c++0x style
}
