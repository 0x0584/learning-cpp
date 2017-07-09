//: vectors.cc 
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

#define FOOSIZE 5

using namespace std;

int main(int argc, char **argv){
  unsigned int i = 0;
  vector<int> vi = {	    // declare and initialize a vector of ints
    1, 2, 3,
    4, 5, 6
  };

  for(i = 0; i < FOOSIZE; ++i)
    vi.push_back(i*2);		// push_back() adds a new element

  // size() gives us the length of the vector
  for(i = 0; i < vi.size(); ++i)
    cout << i << ':' << vi[i] << ' ';
  cout << endl;
  
  for(i = 0; i < vi.size(); ++i)
    vi[i] = vi[i]*2;

  for(i = 0; i < vi.size(); ++i)
    cout << i << ':' << vi[i] << ' ';
  cout << endl;

  // another example using strings
  // and a new way to take input
  // from an input-stream
  ifstream ins("foo.txt");	// input file stream
  vector<string> vs;		// vector of strings
  string tmp;

  while(ins >> tmp) vs.push_back(tmp);

  i = 0;
  while(i < vs.size()) cout << vs[i++] << endl;
  
  return 0;
} ///:~ 
