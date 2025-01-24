#include <stdio.h>

int main() {
    // Variables
    int i;

    // Print even numbers between 0 - 10
    for (i = 1; i <=10; ++i) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }

    // Return
    return 0;
}
