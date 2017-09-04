// FILE:	matching-parens.cc
// AUTHOR:	ANAS RCHID
// EMAIL:	<rchid.anas@gmail.com>
// DESCRIPTION:	this is a program to determine whether 
//		a set of parens is balanced or not.
//
// COMPILING:	g++ matching-parens.cc -o foo
// RUNNING:	./foo str

#include <iostream>

bool isbalanced(char *str);

int main(int argc, char **argv) {
  if(argc != 2) printf("%s str\n", argv[0]), exit(-1);
  else printf("%s\n", isbalanced(argv[1]) ? "TRUE":"FALSE"), exit(0); 
}

bool isbalanced(char *s) {
  // ALGORITHM:	increment a variable by the number of openning
  // parens and then each time we face a closing paren we decrement
  // the variable.
  // if the final result is 0 then return true otherwise return false

  int diff = 0;
  const char open = '(';

  if(*s != open) goto RET;	// the expression )()( would evaluate as true
				// but it's not correct
  
  while(*s != '\0') diff += (*s++ == open) ? 1 : (-1);
  
 RET: return !diff ? true : false;
}
