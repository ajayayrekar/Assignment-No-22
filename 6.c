//6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, largest;
  int *arr;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Dynamic memory allocation
  arr = (int*) malloc(n * sizeof(int));

  printf("Enter the array elements:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // Finding the largest element
  largest = arr[0];
  for (i = 1; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  printf("Largest element in the array: %d", largest);

  // Freeing dynamically allocated memory
  free(arr);
  return 0;
}
