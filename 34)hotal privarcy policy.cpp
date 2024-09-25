#include <stdio.h>

int main() {
    int people, age, business;
    float cost;

    printf("Enter number of people: ");
    scanf("%d", &people);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Is the stay for business? (1 for Yes, 0 for No): ");
    scanf("%d", &business);

    if (people == 2) {
        cost = 85.0;
    } else if (people == 3) {
        cost = 90.0;
    } else if (people == 4) {
        cost = 95.0;
    } else {
        cost = 95.0 + (people - 4) * 6.0;  
    }

    if (business) {
        cost *= 0.8; 
    } else if (age > 60) {
        cost *= 0.85; 
    }

    printf("Total cost of the room: $%.2f\n", cost);
    return 0;
}
