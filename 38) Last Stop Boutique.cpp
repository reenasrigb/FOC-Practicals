#include <stdio.h>
int main() {
    float originalPrice, currentPrice, salePrice;
    printf("Enter the original price of the product: ");
    scanf("%f", &originalPrice);
    currentPrice = originalPrice;

    for (int day = 1; day <= 5; day++) {
        salePrice = currentPrice * 0.9; 
        printf("Sale price on day %d: %.2f\n", day, salePrice);
        currentPrice = salePrice; 
    }

    return 0;
}
