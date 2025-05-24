#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 5  // Change this if you want more students

// Function to calculate average of 3 marks
float calculateAverage(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3;
}

// Function to determine grade based on average
char getGrade(float average) {
    if (average >= 80) return 'A';
    else if (average >= 60) return 'B';
    else if (average >= 40) return 'C';
    else return 'F';
}

int main() {
    char names[MAX_STUDENTS][50];     // Array to store names
    float marks[MAX_STUDENTS][3];     // Each student has 3 marks
    float average[MAX_STUDENTS];      // Store average per student
    char grade[MAX_STUDENTS];         // Store grade per student
    int i;

    // Input loop
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);

        printf("Enter 3 marks for %s:\n", names[i]);
        scanf("%f %f %f", &marks[i][0], &marks[i][1], &marks[i][2]);

        // Calculate average and grade
        average[i] = calculateAverage(marks[i][0], marks[i][1], marks[i][2]);
        grade[i] = getGrade(average[i]);
        printf("\n");
    }

    // Display the report
    printf("\n----- Student Report -----\n");
    for (i = 0; i < MAX_STUDENTS; i++) {
        printf("Name: %s\n", names[i]);
        printf("Average: %.2f\n", average[i]);
        printf("Grade: %c\n\n", grade[i]);
    }

    return 0;
}
