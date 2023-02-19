//4. Write a program to input and print text using dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* text = NULL;

    printf("Enter some text: ");

    // Dynamically allocate memory for the text
    text = (char*)malloc(1024 * sizeof(char));

    // Read a line of text from standard input
    fgets(text, 1024, stdin);

    // Print the text
    printf("You entered: %s\n", text);

    // Free the dynamically allocated memory
    free(text);

    return 0;
}
