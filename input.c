#include <stdio.h>

int main() {
    int age;
    float score;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your score: ");
    scanf("%f", &score);

    printf("\n--- Result ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Score: %.2f\n", score);

    return 0;
}