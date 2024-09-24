#include <stdio.h>
#include <math.h>
int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += pow(i, i);
    }
    printf("The sum is: %d\n", sum);
    return 0;
}
