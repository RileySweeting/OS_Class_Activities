#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in writing mode
    fptr = fopen("hello.txt", "w");

    // Write text to file
    fprintf(fptr, "Hello, \n"
        "How are you? \n"
        "My name is Riley \n"
        "What's your name? \n");

    // Close file
    fclose(fptr);

}
