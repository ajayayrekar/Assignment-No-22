/*2. Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, sum = 0;
    float average;
    int* data;

    printf("Enter the number of data values: ");
    scanf("%d", &n);

    data = (int*)malloc(n * sizeof(int));

    printf("Enter the data values:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data[i]);
        sum += data[i];
    }

    average = (float)sum / n;

    printf("Average = %f\n", average);

    free(data);

    return 0;
}
