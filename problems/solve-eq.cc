// require: -lm
#include <iostream>
#include <math.h>

#define MAX			(50)
#define DELTA(a, b, c)		((b)*(b) - 4*(a)*(c))
#define X(a, b, c, sign)	(((-1)*(b) sign sqrt(DELTA(a, b, c))) / (2*(a)))

int main(int argc, char **argv) {
  int a = 1, b = 0, c = -1;

  // if(argc != 3) {
  //   srand(time(NULL));
  //   srand(a = rand()%MAX);
  //   srand(b = rand()%MAX);
  //   srand(c = rand()%MAX);
  // } else {
  //   a = atoi(argv[1]);
  //   b = atoi(argv[2]);
  //   c = atoi(argv[3]);
  // }

  if(DELTA(a, b, c) <= 0) printf("pas de solution"), exit(-1);

  float x0 = X(a, b, c, +), x1 = X(a, b, c, -);

  printf("%d*x^2 + %d*x + %d has:\n", a, b, c);
  
  if(x0 == x1) printf("one solution %lf", x1);
  else printf("two solutions: %lf and %lf", x0, x1);
  
  return 0;
}
