
#include <stdio.h>

int main() {
    // Variables
    int num;

    // Read input from user
    printf("ENTER NUMBER: ");

    // Scan number
    scanf("%d", &num);

    // Display results
    if (num % 2 == 0) {
        printf("The number %d is even. \n", num);
    } else {
        printf("The number %d is odd. \n", num);
    }

    // Return
    return 0;
}
