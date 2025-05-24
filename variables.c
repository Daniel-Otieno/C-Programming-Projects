#include <stdio.h>

int main() {
    // Declare variables
    int age = 28;
    float height = 6.0;
    char initial = 'O';
    
    // Print the variables
    printf("Age: %d\n", age);         // %d for integers
    printf("Height: %.1f\n", height);  // %.1f for float (1 decimal place)
    printf("Initial: %c\n", initial); // %c for characters
    
    return 0;
}