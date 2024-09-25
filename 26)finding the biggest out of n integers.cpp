#include <stdio.h>
int main() {
    int n, i, num, largest;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter number 1: ");
    scanf("%d", &largest); 
    for (i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > largest) {
            largest = num;
        }
    }
    printf("The largest number is: %d\n", largest);
    return 0;
}
