#include <stdio.h>

int main() {
    float usage, bill = 0.0;

    printf("Enter cubic feet of water used: ");
    scanf("%f", &usage);

    if (usage <= 1000) {
        bill = 15.00;
    } else if (usage <= 2000) {
        bill = 15.00 + (usage - 1000) * 0.0175;
    } else if (usage <= 3000) {
        bill = 15.00 + (1000 * 0.0175) + (usage - 2000) * 0.02;
    } else {
        bill = 70.00;
    }

    printf("Water Bill: $%.2f\n", bill);
    return 0;
}
