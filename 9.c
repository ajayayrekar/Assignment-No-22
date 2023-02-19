/*9. Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  void* ptr;

  printf("Enter the number of bytes to be allocated: ");
  scanf("%d", &n);

  // Dynamic memory allocation
  ptr = malloc(n);

  // Checking if memory allocation was successful
  if (ptr == NULL) {
    printf("Memory allocation failed!");
  }
  else {
    printf("Memory allocation successful!");
    free(ptr); // Freeing dynamically allocated memory
  }

  return 0;
}
