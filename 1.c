/*1. Define a function to input variable length string and store it in an array without
memory wastage.*/

void inputString(char** str) {
    char buffer[1024];
    fgets(buffer, sizeof(buffer), stdin);
    *str = (char*)malloc(strlen(buffer) + 1);
    strcpy(*str, buffer);
}
