#include <stdio.h>

int main() {
    // Variables
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
    int length = sizeof(ages) / sizeof(ages[0]);
    int sum = 0;
    int min = ages[0];
    int i;

    // Calculate sum of ages
    for (i = 0; i < length; ++i) {
        sum = sum + ages[i];

        // Minimum conditional
        if (ages[i] < min) {
            min = ages[i];
        }
    }

    // Display average of ages
    printf("Average Age: %.2f \n", 1.0 * sum / length);

    // Display minimum age
    printf("Minimum Age: %d \n", min);

    // Return
    return 0;
}
