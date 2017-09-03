///:~ string.cc 
#include <string>
#include <iostream>

#include <fstream>		// getline()

using namespace std;

int main(int argc, char **argv) {
  string foo;			// empty string
  string bar = "Hi! I'm bar";	// initialized
  string baz("Hi! I'm baz");	// another initialization form

  foo = "testing";
  bar += (" " + baz);
  cout << "this is " << foo << " " + bar << endl;

  ifstream ins("io.cc");
  ofstream outs("io0.cc");

  string tmp, tmp0;

  while(getline(ins, tmp))	// print the lines on the screen 
    cout << tmp + "\n";

  while(getline(ins, tmp))	// print the lines on the screen 
    tmp0 += (tmp + "\n");
  cout << tmp0 + " ^\n tmp0\n";

  return 0;
} ///:~
