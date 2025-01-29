#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in read mode
    fptr = fopen("4_1_hello.txt", "r");

    // Store file contents
    char myString[100];

    if (fptr != NULL) {
        // Read file contents and store
        while (fgets(myString, 100, fptr)) {
            // Display file contents
            printf("%s", myString);
        }
    } else {
        printf("Bruh, file doesn't exist... \n");
    }

    // Close file
    fclose(fptr);

}
