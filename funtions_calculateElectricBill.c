// Function to calculate electricity bill
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program calculates the electricity bill based on the number of units consumed.
*/





#include <stdio.h>


int calculateElectricBill(int units) {
    int bill = 0;

    if (units <= 100) {
        bill = units * 10;  // first 100 units
    } else if (units <= 200) {
        bill = 100 * 10 + (units - 100) * 15;  // next 100 units
    } else {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;  // above 200 units
    }

    return bill;
}

int main() {
    int units;
    
    printf("Enter number of units consumed: ");
    scanf("%d", &units);

    int totalBill = calculateElectricBill(units);  // function call
    printf("Total electricity bill: KSh. %d\n", totalBill);

    return 0;
}