#include <stdio.h>

int main() {
    int original, checkDigit, sum = 0;  
    printf("Enter a four-digit number: ");
    scanf("%d", &original);  
 
    int temp = original; 
    while (temp > 0) {
        sum += temp % 10;  
        temp /= 10;        
    }

    checkDigit = (sum % 2 == 0) ? 0 : 1;

    printf("Original number: %04d\n", original); 
    printf("New number: %04d%d\n", original, checkDigit); 

    return 0;
}
