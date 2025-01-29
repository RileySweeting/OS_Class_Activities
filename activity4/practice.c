#include <stdio.h>
#include <stdlib.h>

struct Car {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    // FILE WRITING ------------------------------------------------------

    // Open file in writing mode
    FILE *fptr;
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

    // FILE READING ------------------------------------------------------

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

    // Open file
    FILE* fp;
    fp = fopen("practice_out.txt", "r");

    // Move pointer to end
    fseek(fp, 0, SEEK_END);

    // Display pointer position
    printf("%ld \n", ftell(fp));

    // STRUCTURES ------------------------------------------------------------------

    // Construct car objects
    struct Car car1 = {"Hyundai", "Santa Fe", 2020};
    struct Car car2 = {"Dodge", "Camaro", 2019};
    struct Car car3 = {"Ford", "Explorer", 1996};

    // Display car info
    printf("%s %s %d \n", car1.brand, car1.model, car1.year);
    printf("%s %s %d \n", car2.brand, car2.model, car2.year);
    printf("%s %s %d \n", car3.brand, car3.model, car3.year);

    // DYNAMIC MEMORY ALLOCATION ---------------------------------------------------

    // int *ptr1 = malloc(size);
    // int *ptr2 = calloc(amount, size);

    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));

    printf("%lu", numStudents * sizeof(*students));

    return 0;

}
