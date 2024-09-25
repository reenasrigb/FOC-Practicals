#include <stdio.h>

int main() {
    float initialPrice, accessoryPrice, totalAccessoryPrice = 0;
    float salesTaxRate, totalCostBeforeTax, salesTaxAmount, totalCost;
    int numberOfAccessories;

    // Input the initial price of the car
    printf("Enter the initial price of the car: ");
    scanf("%f", &initialPrice);

    // Input the number of accessories
    printf("Enter the number of accessories (0 to 10): ");
    scanf("%d", &numberOfAccessories);

    // Input the prices of accessories
    for (int i = 1; i <= numberOfAccessories; i++) {
        printf("Enter the price of accessory %d: ", i);
        scanf("%f", &accessoryPrice);
        totalAccessoryPrice += accessoryPrice;
    }

    // Input the sales tax rate
    printf("Enter the sales tax rate (in percentage): ");
    scanf("%f", &salesTaxRate);

    // Calculate total cost
    totalCostBeforeTax = initialPrice + totalAccessoryPrice;
    salesTaxAmount = (totalCostBeforeTax * salesTaxRate) / 100;
    totalCost = totalCostBeforeTax + salesTaxAmount;

    // Output the total cost
    printf("The total cost of the car is: %.2f\n", totalCost);

    return 0;
}
