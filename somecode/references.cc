//: references.cc
#include <iostream>
using namespace std;

int foo(int &f) {
  return (f = 11);
}

int main(int argc, char **argv) {
  int bar = 0;

  cout << foo(bar)		// looks like a pass by value,
				// but it's a pass by reference!
       << endl;

  
  return 0;
}
