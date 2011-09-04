#include <vector>

void f(){
std::vector<int> vec;

const std::vector<int>::iterator iter =     // iter acts like a T* const
  vec.begin();
*iter = 10;                                 // OK, changes what iter points to
++iter;                                    // error! iter is const>
}

