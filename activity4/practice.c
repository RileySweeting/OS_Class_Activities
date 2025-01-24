#include <stdio.h>

int main() {
    FILE *fptr;

    // Open file in writing mode
    fptr = fopen("practice_out.txt", "w");

    // Write text to file
    fprintf(fptr, "Some text \n");

    // Close file
    fclose(fptr);

    // Open file in append mode
    fptr = fopen("practice_out.txt", "a");

    // Append text to file
    fprintf(fptr, "Additional text... \n");

    // Close file
    fclose(fptr);

    // Open file in read mode
    fopen("practice_out.txt", "r");

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
