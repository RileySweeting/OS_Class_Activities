#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variables
    int num_students;

    // Read input from user
    printf("ENTER NUMBER OF STUDENTS: ");

    // Scan number
    scanf("%d", &num_students);

    // Dynamically allocate scores memory
    int *scores = malloc(num_students * 4);

    // Read all student scores from user
    for (int i = 0; i < num_students; ++i) {
        // Read input from user
        printf("ENTER STUDENT'S SCORE: ");

        // Scan number
        scanf("%d", &scores[i]);
    }

    // Open file in writing mode
    FILE *fptr;
    fptr = fopen("4_6_output.txt", "w");

    // Traverse scores array backwards
    for (int i = num_students - 1; i >= 0; --i) {
        // Write score to file
        fprintf(fptr, "%d \n", scores[i]);
    }

    // Close file
    fclose(fptr);

    // Free memory
    free(scores);

    // Return
    return 0;
}
