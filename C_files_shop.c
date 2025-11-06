// A C program to read daily sales transactions from a file and calculate the total sales.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program reads daily sales transactions from a file and calculates the total sales.
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    float transaction, total = 0.0;

    // Open the file in read mode
    file = fopen("sales.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Read each transaction and accumulate the total
    while (fscanf(file, "%f", &transaction) == 1) {
        total += transaction;
    }

    // Close the file
    fclose(file);

    // Display total sales
    printf("Total sales for the day: %.2f\n", total);

    return 0;
}