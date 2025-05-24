#include <stdio.h>

int main() {
    int score;

    // Ask the user for a score
    printf("Enter your score: ");
    scanf("%d", &score);

    // Check the value and decide the grade
    if (score >= 80) {
        // If score is 80 or more
        printf("You got an A!\n");
    } else if (score >= 60) {
        // If score is between 60 and 79
        printf("You got a B.\n");
    } else if (score >= 40) {
        // If score is between 40 and 59
        printf("You got a C.\n");
    } else {
        // If score is below 40
        printf("You failed. Better luck next time.\n");
    }

    return 0;
}
