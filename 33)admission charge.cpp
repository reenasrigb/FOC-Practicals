#include <stdio.h>

int main() {
    int age;
    float charge;

    printf("Enter age: ");
    scanf("%d", &age);  

    if (age < 3) {
        charge = 0.0;  // Free for under 3
    } else if (age >= 3 && age <= 12) {
        charge = 5.0;  // $5.00 for ages 3–12
    } else if (age >= 13 && age <= 20) {
        charge = 10.0; // $10.00 for ages 13–20
    } else if (age >= 21 && age <= 54) {
        charge = 15.0; 
    } else {
        charge = 10.0; 
    }

    printf("Admission charge: $%.2f\n", charge);
    return 0;
}
