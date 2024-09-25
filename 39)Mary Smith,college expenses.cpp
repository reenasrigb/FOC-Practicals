#include <stdio.h>
int main() {
    float loanAmount = 3000.0;
    float monthlyPayment = 85.0;
    float interestRate = 1.0;
    float balance = loanAmount;
    float totalInterest = 0.0;
    int months = 0;
    float interest, principal;

    while (balance > 0) {
        interest = balance * (interestRate / 100);
        totalInterest += interest;
        principal = monthlyPayment - interest;

        if (principal < 0) {
            printf("Monthly payment is not enough to cover interest.\n");
            break;
        }

        balance -= principal;
        months++;
    }

    int years = months / 12;
    int remainingMonths = months % 12;

    printf("Total interest paid: %.2f\n", totalInterest);
    printf("Total months to pay off the loan: %d\n", months);
    printf("Years: %d\n", years);
    printf("Remaining months: %d\n", remainingMonths);

    return 0;
}
