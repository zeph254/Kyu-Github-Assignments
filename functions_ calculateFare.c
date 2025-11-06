// Function to calculate total fare
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program calculates the total fare based on the distance traveled.
*/



#include <stdio.h>


int calculateFare(int distance) {
    int farePerKm = 50;      // rate per kilometer
    int totalFare = distance * farePerKm;
    return totalFare;
}

int main() {
    int distance;

    printf("Enter distance traveled (in km): ");
    scanf("%d", &distance);

    int totalFare = calculateFare(distance);  // function call
    printf("Total fare: KSh. %d\n", totalFare);

    return 0;
}