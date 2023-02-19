/*10. Find out the maximum and minimum from an array using dynamic memory allocation
in C.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *arr, i;
    int max, min;

    // Get the size of the array from user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Allocate memory dynamically
    arr = (int*) malloc(n * sizeof(int));

    // Get the elements of the array from user
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element as both maximum and minimum
    max = arr[0];
    min = arr[0];

    // Find the maximum and minimum elements in the array
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print the maximum and minimum elements
    printf("Maximum element is %d\n", max);
    printf("Minimum element is %d\n", min);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
