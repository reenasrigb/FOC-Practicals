#include <stdio.h>

int main() {
    float startingOdometer, odometerReading, gallonsUsed;
    float totalMiles = 0.0, totalGallons = 0.0;

    printf("Enter starting odometer reading: ");
    scanf("%f", &startingOdometer);

    for (int i = 1; i <= 6; i++) {
        printf("Enter odometer reading for fill-up %d: ", i);
        scanf("%f", &odometerReading);
        
        printf("Enter gallons used for fill-up %d: ", i);
        scanf("%f", &gallonsUsed);

        totalMiles += (odometerReading - startingOdometer);
        totalGallons += gallonsUsed;

        startingOdometer = odometerReading;
    }

    float averageMPG = totalMiles / totalGallons;

    printf("Average miles per gallon: %.2f\n", averageMPG);

    return 0;
}
