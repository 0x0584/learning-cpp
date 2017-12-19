#include <iostream>

int main(int argc, char **argv) {

  for(int size = 3; size < 15; size += 2) {
    for(int i = 0; i < size; ++i) {
      for(int j = 0; j < size + 1; ++j) {
	std::cout << (i == j || (j + i) == (size - 1) ? "*" : " ");
      }
      std::cout << std::endl;
    }
    std::cout << std::endl << std::endl;;
  }
  
  return 0;
}
