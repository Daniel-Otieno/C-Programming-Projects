#include <stdio.h>

int main() {
    // Declare variables
    char name[50] = "Mr Daniel";     // Character array to store the name
    int age = 28;               // Integer for age
    float score = 99.9;         // Float for score

    // Print formatted output
    printf("My name is %s, I am %d years old and I scored %.1f\n", name, age, score);

    return 0;
}