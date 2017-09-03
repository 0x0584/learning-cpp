//: specifiers.cc
#include <iostream>
using namespace std;

int main(int argc, char **argv) {
  char c;
  unsigned char cu;
  
  int i;
  unsigned int iu;

  short int is;
  short iis;			// Same as short int

  unsigned short int isu;
  unsigned short iisu;

  long int il;
  long iil;			// Same as long int
  long long int lli;
  
  unsigned long int ilu;
  unsigned long iilu;

  float f;
  double d;			// long float

  long double ld;

  cout << "\nchar\t\t = \t\t"		<< sizeof(c)
       << "\nunsigned char\t = \t\t" 	<< sizeof(cu)
       << "\nint\t\t = \t\t" 		<< sizeof(i)
       << "\nunsigned int\t = \t\t" 	<< sizeof(iu)
       << "\nshort\t\t = \t\t" 		<< sizeof(is)
       << "\nunsigned short\t = \t\t"	<< sizeof(isu)
       << "\nlong\t\t = \t\t" 		<< sizeof(il)
       << "\nlong long int\t = \t\t"	<< sizeof(lli)
       << "\nunsigned long\t = \t\t" 	<< sizeof(ilu)
       << "\nfloat\t\t = \t\t" 		<< sizeof(f)
       << "\ndouble\t\t = \t\t" 	<< sizeof(d)
       << "\nlong double\t = \t\t" 	<< sizeof(ld)
       << endl;
  
  return 0;
}
// long short int lsi; // not correct
