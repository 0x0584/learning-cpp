#include <iostream>		// input and output header
using namespace std;		// standard library namespace

class Foo {
private:			// inside Foo (by default, all
				// members of a class are private
  int i;
  float f;
  void m1() const;		// private method signature 

public:				// outside Foo
  int x;
  float y;
  void m2() const;		// public method signature
};

int main()			// the main entry point 
{
  return 0;  
}
