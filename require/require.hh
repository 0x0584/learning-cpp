//: :require.h
// Test for error conditions in programs
// Local "using namespace std" for old compilers

#ifndef REQUIRE_H
#define REQUIRE_H
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>

using namespace std;
 
inline void require(bool requirement, const string& msg = "ERR") {
  using namespace std;
  if(!requirement) {
    fputs(msg.c_str(), stderr);
    fputs("\n", stderr);
    exit(1);
  }
}
 
inline void requireArgs(int argc, int args,
			const string& msg = "Must use %d args") {
  if(argc != args + 1) {
    fprintf(stderr, msg.c_str(), args);
    fputs("\n", stderr);
    exit(1);
  }
}
 
inline void requireMinArgs(int argc, int minArgs,
			   const string &msg = "Must use at least %d args") {
  using namespace std;
  if(argc < minArgs + 1) {
    fprintf(stderr, msg.c_str(), minArgs);
    fputs("\n", stderr);
    exit(1);
  }
}

inline void assure(ifstream& in, const string& filename = "") {
  using namespace std;
  if(!in) {
    fprintf(stderr, "Could not open file %s\n",
	    filename.c_str());
    exit(1);
  }
}
 
inline void assure(ofstream& out, const string& filename = "") {
  using namespace std;
  if(!out) {
    fprintf(stderr, "Could not open file %s\n",
	    filename.c_str());
    exit(1);
  }
}
#endif // REQUIRE_H ///:~
