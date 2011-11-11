#include <string.h>

void func1(const char* argv){
   ++argv; // ok
   argv[0] = 'a'; //error
}

void func2(char* const argv){
   argv[0] = 'a';
   ++argv; //error
}

static char* str="hello"; 
void func3(const char** argv){
   ++argv; //ok
   *argv = str; // ok
   ++(*argv); // ok
   *argv[0] = 'a'; // error
}

void func4(char** const argv){
   *argv[0] = 'a'; // ok
   *argv = str; // ok
   ++argv; //error
}

void func5(char* const *argv){
   *argv[0] = 'a'; // ok
   *argv = str; // error
}
