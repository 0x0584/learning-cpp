// FILE:	matching-parens.cc
// AUTHOR:	ANAS RCHID
// EMAIL:	<rchid.anas@gmail.com>
// DESCRIPTION:	this is a program to determine whether 
//		a set of parens is balanced or not.
//
// COMPILING:	g++ matching-parens.cc -o foo
// RUNNING:	./foo str

#include <iostream>

bool isbalanced(const char *str);
int isbalanced0(const char *str);

int main(int argc, char **argv) {
  if(argc != 2) printf("%s str\n", argv[0]), exit(-1);
  else printf("%s %d\n",
	      isbalanced(argv[1]) ? "TRUE":"FALSE",
	      isbalanced0(argv[1])), exit(0); 
}

bool isbalanced(const char *s) {
  // ALGORITHM:	increment a differ by the number of openning
  // parens and then each time we face a closing paren
  // we decrement the differ.
  // if the differ == 0 then return true otherwise return false

  // the difference between opening and closing parens
  int diff = 0;
  const char open = '(';

  if(*s != open) goto ERR;	// the expression )()( would evaluate
				// as true but it's not correct

  // implmentation of the previous algorithm
  while(*s != '\0') diff += (*s++ == open) ? 1 : (-1);
  
 RET: return !diff ? true : false;
 ERR: return false;
}

unsigned strlen(const char *s) {
  int len = 0;
  while(s[len++] != '\0');
  return len;
}

int isbalanced0(const char *s) {
  // ALGORITHM:	go back and forward through the string, dumb algorithm!
  
  int diff = 0, index = 0;
  const char *ts = s, open = '(';

  // implmentation of the previous algorithm
  while(*s != '\0') {
    if((diff += (*s++ == open) ? 1 : (-1)) < 0) return index;
    else ++index;
  }

  index = strlen(s) - 1;
  
  while(index >= 0) {
    if((diff += (*ts-- == open) ? 1 : (-1)) > 0) return index;
    else --index;
  }
  
  return -1;
}
