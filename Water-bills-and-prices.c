// Calculation of water bill based on units consumed

/* 
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program calculates the water bill based on the number of units consumed.
*/

#include <stdio.h>

int main() {
    int units;
    float bill = 0.0;

    // Input units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate bill using if-else conditions
    if (units <= 30) {
        bill = units * 20.0;
    } else if (units <= 60) {
        bill = (30 * 20.0) + ((units - 30) * 25.0);
    } else {
        bill = (30 * 20.0) + (30 * 25.0) + ((units - 60) * 30.0);
    }

    // Display total bill with 2 decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}