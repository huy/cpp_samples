class Foo {
public:
   explicit Foo(int inVal):val(inVal){}

   int get(){ return val;}
   operator int() const { return val;}

private:
   int val;
};
