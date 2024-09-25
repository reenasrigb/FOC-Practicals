#include <stdio.h>
int main() {
    int totalA = 0, totalB = 0, totalC = 0, totalD = 0, totalF = 0;
    int studentNumber;
    float numericGrade;

    for (int i = 1; i <= 200; i++) {
      
        printf("Enter student number (or -1 to finish): ");
        scanf("%d", &studentNumber);

        // Allow user to finish input early if needed
        if (studentNumber == -1) {
            break; // Exit the loop
        }

        // Input numeric grade
        printf("Enter numeric grade: ");
        scanf("%f", &numericGrade);

        // Determine letter grade and count it
        char letterGrade;
        if (numericGrade >= 90) {
            letterGrade = 'A';
            totalA++;
        } else if (numericGrade >= 78) {
            letterGrade = 'B';
            totalB++;
        } else if (numericGrade >= 65) {
            letterGrade = 'C';
            totalC++;
        } else if (numericGrade >= 50) {
            letterGrade = 'D';
            totalD++;
        } else {
            letterGrade = 'F';
            totalF++;
        }

        // Print student information
        printf("Student Number: %d\n", studentNumber);
        printf("Numeric Grade: %.2f\n", numericGrade);
        printf("Letter Grade: %c\n", letterGrade);
        printf("-----------------------\n");
    }

    // Print total counts of grades
    printf("Total A's: %d\n", totalA);
    printf("Total B's: %d\n", totalB);
    printf("Total C's: %d\n", totalC);
    printf("Total D's: %d\n", totalD);
    printf("Total F's: %d\n", totalF);

    return 0;
}
