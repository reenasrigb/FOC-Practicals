#include <stdio.h>
#include <math.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    int terms, i;
    double x, sine = 0, term;
    int sign = 1; 

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i <= 2 * terms - 1; i += 2) {
        term = pow(x, i) / factorial(i);  
        sine += sign * term;             
        sign = -sign;                     
    }

    printf("sin(%.2lf) = %.6lf\n", x, sine);

    return 0;
}
