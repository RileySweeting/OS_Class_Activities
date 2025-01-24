#include <stdio.h>

int main() {
    // Variables
    int myAge = 43;
    double myWeight = 165.5;
    char mySign = 'O';

    // Pointers
    int* ptr_int = &myAge;
    double* ptr_dbl = &myWeight;
    char* ptr_chr = &mySign;

    // Display Variables
    printf("Address: %p | Value: %d | Memory: %lo \n", ptr_int, myAge, sizeof(myAge));
    printf("Address: %p | Value: %.2f | Memory: %lo \n", ptr_dbl, myWeight, sizeof(myAge));
    printf("Address: %p | Value: %c | Memory: %lo \n", ptr_chr, mySign, sizeof(myAge));

    // Display Pointers
    printf("Address: %p | Value: %p | Memory: %lo \n", &ptr_int, ptr_int, sizeof(ptr_int));
    printf("Address: %p | Value: %p | Memory: %lo \n", &ptr_dbl, ptr_dbl, sizeof(ptr_dbl));
    printf("Address: %p | Value: %p | Memory: %lo \n", &ptr_chr, ptr_chr, sizeof(ptr_chr));

    // Read numbers from user
    int num1, num2;

    scanf("%d", &num1);
    scanf("%d", &num2);

    int* num1_ptr = &num1;
    int* num2_ptr = &num2;

    int ans = *num1_ptr + *num2_ptr;

    // Display answer
    printf("Sum of numbers %d and %d is %d \n", num1, num2, ans);






}
