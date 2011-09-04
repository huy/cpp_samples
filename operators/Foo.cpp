#include "Foo.h"
#include <iostream>

void doExplicit(){
  Foo foo(10);
  std::cout << foo.get() << std::endl;
}

void doImplicit(){
  Foo foo(10);
  std::cout << foo << std::endl;
}
