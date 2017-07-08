//: io.cc
// created: 07/08/2017
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  // cout: console output
  cout << "this is a test" << endl;
  cout << "this is 2^(2) " << (1 << 2) << endl;
  cout << "this is " << 10 << "in decimal " << dec << 10 << endl;
  cout << "this is " << 1024 << "in hex: 0x" << hex << 1024 << endl;
  cout << "this is " << 512 << "in octal " << oct << 512 << endl;
  cout << "this is a non-printing character " << char(17) << endl;
  cout << "this is a fisrt message\t"
    "this is a secound one!\n"
    "third one and so on" << endl;

  // cin: console input
  int foo = 0;
  cin >> foo;
  cout << "the value of foo is " << foo << endl;

  int bar = 0;
  cin >> foo >> bar;
  cout << bar << (foo == bar ? " == ":" != ") << foo << endl;

  return 0;
} ///:~
