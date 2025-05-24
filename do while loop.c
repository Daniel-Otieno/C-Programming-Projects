#include <stdio.h>

int main() {
    int i = 1;

    // This will run first, then check the condition
    do {
        printf("Value: %d\n", i);
        i++;
    } while (i <= 5);

    return 0;
}
