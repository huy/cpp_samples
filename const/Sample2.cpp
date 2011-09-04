#include <vector>

void f(){
std::vector<int> vec;

std::vector<int>::const_iterator iter =     // iter acts like a const T*
  vec.begin();
++iter;                                    // OK
*iter = 10;                                // error! *iter is const
}

