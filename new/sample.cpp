class Foo {
public:
  Foo(int z):val(z){}
private:
  int val;
};

Foo* foo= new Foo(10);
