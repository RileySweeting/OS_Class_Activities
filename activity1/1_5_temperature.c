#include <stdio.h>

int main() {
    // Variables
    int temp;

    // Read input from user
    printf("ENTER TEMPERATURE: ");

    // Scan number
    scanf("%d", &temp);

    // Display results
    printf("%d \n", temp > 70 && temp < 85);

    // Return
    return 0;
}
