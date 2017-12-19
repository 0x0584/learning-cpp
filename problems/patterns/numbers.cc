#include <iostream>

int main() {
  int foo = 9, bar = 9, result = 0, i = (bar - 2);

  while(i-- >= 0) {
    printf("%d * %d + %d = %d", foo, bar, i, foo * bar + i);
  }
}
