#include <string>
using namespace std;

class Name {                    // for names of things
public:
  Name(const char* s){};      // converts string to Name
  operator const char*() const{	// converts Name to char*
    return "hello";
  };         
};
