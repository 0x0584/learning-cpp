#include <iostream>		// input and output header
#include <stdio.h>

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

				// the main entry point 
int main(int argc, char **argv) {

  return 0;  
} ///:~
