//7. Write a program to demonstrate memory leak in C.

#include <stdlib.h>

int main() {
  int* ptr;

  // Memory allocation without freeing it
  ptr = (int*) malloc(10 * sizeof(int));

  // More code using ptr variable here...

  return 0;
}
