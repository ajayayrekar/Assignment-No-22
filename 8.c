//8. Write a program to demonstrate dangling pointers in C.

#include <stdlib.h>
#include <stdio.h>

int main() {
  int *ptr;
  int var = 5;

  ptr = &var;

  // Deallocating memory pointed to by ptr
  free(ptr);

  // ptr now points to an invalid memory location
  // Using ptr can lead to undefined behavior
  printf("%d", *ptr);

  return 0;
}
