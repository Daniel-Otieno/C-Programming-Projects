#include <stdio.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;  // Return the sum
}

int main() {
    int result;

    // Call the add() function and store the result
    result = add(5, 3);

    // Display the result
    printf("The sum is: %d\n", result);

    return 0;
}
// This program demonstrates a simple function with parameters in C.