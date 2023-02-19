/*3. Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    int* numbers;

    printf("Enter the number of values to sum: ");
    scanf("%d", &n);

    numbers = (int*)malloc(n * sizeof(int));

    printf("Enter the values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    free(numbers);

    return 0;
}
