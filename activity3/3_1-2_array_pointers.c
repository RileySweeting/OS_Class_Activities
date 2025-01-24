#include <stdio.h>

int main() {
    // Variables
    int myNumbers[4] = {4, 3, 6, 5};

    // Memory address of array
    printf("Address: %p \n", &myNumbers);

    // Display all elements and their addresses
    for (int i = 0; i < sizeof(myNumbers) / 4; ++i) {
        printf("Address: %p | Element: %d \n", &myNumbers[i], *&myNumbers[i]);
    }

    printf("------------------------ \n");

    // Display all elements and their addresses
    for (int i = 0; i < sizeof(myNumbers) / 4; ++i) {
        printf("Address: %p | Element: %d \n", (myNumbers + i), *(myNumbers + i));
    }

}
