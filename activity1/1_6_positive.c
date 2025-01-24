
#include <stdio.h>

int main() {
    // Variables
    int num;

    // Read input from user
    printf("ENTER NUMBER: ");

    // Scan number
    scanf("%d", &num);

    // Display results
    if (num > 0) {
        printf("The number %d is positive. \n", num);
    } else if (num == 0) {
        printf("The number %d is 0. \n", num);
    } else {
        printf("The number %d is negative. \n", num);
    }

    // Return
    return 0;
}
