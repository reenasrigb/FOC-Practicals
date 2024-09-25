#include <stdio.h>
#include <math.h>

// Function to calculate factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate cosine using the series
double cosine_series(double x, int terms) {
    double result = 1.0;  // Start with the first term (1)
    int sign = -1;       

    for (int i = 2, j = 1; j < terms; i += 2, j++) {
        result += sign * (pow(x, i) / factorial(i));  
        sign = -sign; 
    }

    return result;
}

int main() {
    double x;
    int terms;

    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    double cos_value = cosine_series(x, terms);

    printf("cos(%.2lf) = %.10lf\n", x, cos_value);

    return 0;
}
