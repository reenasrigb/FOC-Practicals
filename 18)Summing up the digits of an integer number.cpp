#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Loop to calculate sum of digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;        // Remove the last digit
    }

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
