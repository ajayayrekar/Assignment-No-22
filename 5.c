/*5. Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  int n, i, sum = 0;
  int *arr;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  // Dynamic memory allocation
  arr = (int*) malloc(n * sizeof(int));

  printf("Enter the array elements:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }

  printf("\nArray elements are: ");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }

  printf("\nSum of all elements: %d", sum);

  // Freeing dynamically allocated memory
  free(arr);
  return 0;
}
