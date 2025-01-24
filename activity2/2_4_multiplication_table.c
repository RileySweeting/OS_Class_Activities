#include <stdio.h>

int main() {
    // Variables
    int i, j;

    // Display multiplication table up to multiples of 12
    for (i = 1; i <=12; ++i) {
        for (j = 1; j <=12; ++j) {
            printf("%4d", i * j);
        }

        printf("\n");
    }

    // Return
    return 0;
}
