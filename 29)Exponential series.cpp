#include <stdio.h>
#include <math.h>

int main() {
    double x;
    int terms;
    double result = 1.0; 
    double term;          
    int i;

    printf("Enter the value of x: ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (i = 1; i < terms; i++) {
        term = pow(x, i) / tgamma(i + 1); 
        result += (i % 2 == 0 ? -term : term);  
    }

    printf("e^%.2lf - 1 = %.10lf\n", x, result - 1);

    return 0;
}
