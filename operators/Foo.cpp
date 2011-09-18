#include "Foo.h"
#include "Name.h"
#include <iostream>

void basic_explicit(){
  Foo foo(10);
  cout << foo.get() << endl;
}

void basic_implicit(){
  Foo foo(10);
  cout << foo << endl;
}

void customtype_implicit(){
  Name name("hello world");
  cout << name << endl;
}

int main(int argc, char** argv){
   basic_explicit();
   basic_implicit();
   customtype_implicit();
   return 0;
}
