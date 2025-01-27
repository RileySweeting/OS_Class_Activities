#include <stdio.h>

int main() {
    // Variables
    int user_score;

    // Read input from user
    printf("ENTER SCORE (OUT OF 50): ");

    // Scan number
    scanf("%d", &user_score);

    // Display results
    printf("You scored %.2f%% or %d / 50 \n", 100 * user_score / 50.0, user_score);

    // Return
    return 0;
}
