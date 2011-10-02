#include <iostream>

class Bar{
public:
  Bar();
  virtual ~Bar();
};

Bar::Bar(){
  std::cout << "\tcall constructor" << std::endl;
};

Bar::~Bar(){
  std::cout << "\tcall destructor" << std::endl;
};

void test_auto_release(){
 std::cout << "start" << std::endl; 
 {
   Bar bar;
 }
 std::cout << "finish" << std::endl; 
}

int main(int argc,char** argv) {
   Bar bar;
}
