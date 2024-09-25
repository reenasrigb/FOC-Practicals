#include <stdio.h>
int main() {
    int n, num, sum = 0;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num; 
    }
    printf("Sum = %d\n", sum);
    printf("Average = %d\n", sum / n);

    return 0;
}
