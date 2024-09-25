#include <stdio.h>

int main() {
    char grade;       // To store the letter grade
    int units;        // To store the number of units
    float totalGradePoints = 0.0; // Total grade points
    int totalUnits = 0; // Total units of credit

    // Loop until the user decides to exit
    while (1) {
        // Get the letter grade from the user
        printf("Enter letter grade (A, B, C, D, F) or 'X' to finish: ");
        scanf(" %c", &grade); // Note the space before %c to ignore any newline

        // Check for exit condition
        if (grade == 'X') {
            break; // Exit the loop
        }

        // Get the number of units from the user
        printf("Enter number of units: ");
        scanf("%d", &units);

        // Determine grade points based on the letter grade
        float gradePoint;
        if (grade == 'A') {
            gradePoint = 4.0;
        } else if (grade == 'B') {
            gradePoint = 3.0;
        } else if (grade == 'C') {
            gradePoint = 2.0;
        } else if (grade == 'D') {
            gradePoint = 1.0;
        } else if (grade == 'F') {
            gradePoint = 0.0;
        } else {
            printf("Invalid grade. Please enter A, B, C, D, or F.\n");
            continue; // Skip to the next iteration
        }

        // Calculate total grade points and total units
        totalGradePoints += gradePoint * units; // Add grade points for this course
        totalUnits += units; // Add units for this course
    }

    // Calculate and display GPA
    if (totalUnits > 0) {
        float gpa = totalGradePoints / totalUnits;
        printf("Your GPA is: %.2f\n", gpa);
    } else {
        printf("No valid grades entered.\n");
    }

    return 0;
}
