#include <iostream>

using namespace std;

int myfuncA(int a){
   cout << "call A(" << a << ")\n";
}

int myfuncB(int a){
   cout << "call B(" << a <<")\n";
}

int main()
{
   string a="hello";
   decltype(a) b = "world";

   cout << a << " " << b << "\n";

   decltype(&myfuncA) f = &myfuncB;
   f(1);
   f = &myfuncA;
   f(2);
}
