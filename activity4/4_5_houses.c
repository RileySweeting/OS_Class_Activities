#include <stdio.h>
#include <stdlib.h>

struct House {
    char address[100];
    int sqft;
    int num_bed;
    float num_bath;
    float price;
};

int main() {

    // STRUCTURES ------------------------------------------------------------------

    // Construct car objects
    struct House suburban = {"123 That Street, TinyVille, FL 82391", 2500, 3, 2, 499999.99};
    struct House bungalow = {"121 Lake Hollingsworth Dr, Lakeland, FL 33801", 1599, 3, 1.5, 350000.00};
    struct House cottage = {"422 Jenny Mae Way, Lakeland Highlands, FL 33877", 899, 2, 1, 219999.99};

    // Display car info
    printf("Address: %s | Sqft: %d | Num Bed: %d | Num Bath: %.1f | Price: $%.2f \n", suburban.address, suburban.sqft, suburban.num_bed, suburban.num_bath, suburban.price);
    printf("Address: %s | Sqft: %d | Num Bed: %d | Num Bath: %.1f | Price: $%.2f \n", bungalow.address, bungalow.sqft, bungalow.num_bed, bungalow.num_bath, bungalow.price);
    printf("Address: %s | Sqft: %d | Num Bed: %d | Num Bath: %.1f | Price: $%.2f \n", cottage.address, cottage.sqft, cottage.num_bed, cottage.num_bath, cottage.price);

    return 0;

}
