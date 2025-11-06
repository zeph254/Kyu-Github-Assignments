// A C program to calculate total and average weekly revenue from daily inputs and avarage daily revenue.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program calculates the total and average revenue for a week based on daily inputs and avarage daily revenue.
*/



#include <stdio.h>

int main() {
    float revenue[7];
    float total = 0.0, average;
    int i;

    printf("Enter the revenue for each day of the week:\n");
    for (i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%f", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7;

    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}