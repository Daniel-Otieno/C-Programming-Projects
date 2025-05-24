#include <stdio.h>

int main() {
    // ====== PART 1: Print even numbers from 1 to 20 using a for loop ======
    printf("Even numbers from 1 to 20:\n");
    
    for (int i = 1; i <= 20; i++) {
        // Check if the current number is even
        if (i % 2 == 0) {
            printf("%d ", i);  // Print the even number
        }
    }

    // Newline for spacing
    printf("\n\n");

    // ====== PART 2: Count down from 10 to 1 using a while loop ======
    printf("Counting down from 10 to 1:\n");
    
    int count = 10;  // Start counting from 10

    while (count >= 1) {
        printf("%d ", count);  // Display current count
        count--;               // Decrease the count by 1
    }

    // Final newline
    printf("\n");

    return 0;
}