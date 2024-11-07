#include <stdio.h>

int main() {
    float hours, hourlywage, grosspay, taxes, netpay;
    
    // Get input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourlywage);

    // Calculating gross pay
    if (hours > 40) {
        grosspay = (40 * hourlywage) + ((hours - 40) * hourlywage * 1.5);
    } else {
        grosspay = hours * hourlywage;
    }

    // Calculating taxes
    if (grosspay <= 600) {
        taxes = grosspay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grosspay - 600) * 0.20);
    }

    // Calculate net pay
    netpay = grosspay - taxes;

    // Printing results
    printf("\nGross Pay: $%.2f\n", grosspay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netpay);

    return 0;
}