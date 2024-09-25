#include <stdio.h>

int main() {
    int num, digit;
    
    // Input the number from user
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // If the number is negative, convert it to positive
    if (num < 0) {
        num = -num;
    }
    
    printf("Digits of the number are: ");
    
    // Extract digits from the number
    while (num > 0) {
        digit = num % 10;  // Get the last digit
        printf("%d ", digit);
        num = num / 10;  // Remove the last digit
    }

    return 0;
}
