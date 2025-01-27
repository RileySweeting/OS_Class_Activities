#include <stdio.h>

int main() {
    // Variables
    int num_items = 50;
    float item_price = 9.99;

    // Display calculated total
    printf("%d items priced at $%.2f each total to $%.2f \n", num_items, item_price, num_items * item_price);

    // Return
    return 0;
}