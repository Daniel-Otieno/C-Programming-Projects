#include <stdio.h>

int main() {
    int age;

    // Ask the user to input their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Determine and print the category based on age
    if (age < 13) {
        printf("You are a child\n");
    } else if (age < 18) {
        printf("You are a teenager\n");
    } else if (age < 60) {
        printf("You are an adult\n");
    } else {
        printf("You are a senior\n");
    }

    return 0;
}