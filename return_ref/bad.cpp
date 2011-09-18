#include <string>

const std::string& ReturnStackVar()
{
  std::string result("bad");
  return result;
}

const std::string& ReturnHeapVar()
{
  std::string* result= new std::string("can lead to memory leak");
  return *result;
}
