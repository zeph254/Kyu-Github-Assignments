// A C program to collect and display user details
/*  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program collects user details such as height, bank balance, and phone number, and displays them.
*/




#include <stdio.h>

int main() {
    float height;           // for height in meters or centimeters
    double bank_balance;    // for larger values of money
    char phone_number[20];  // store as string to avoid numeric issues

    // Prompt user for inputs
    printf("Enter your height (in meters or centimeters): ");
    scanf("%f", &height);

    printf("Enter your bank balance (in Kenya shillings): ");
    scanf("%lf", &bank_balance);

    printf("Enter your phone number: ");
    scanf("%s", phone_number); // no '&' because phone_number is already an array

    // Display the results
    printf("\n--- Your Details ---\n");
    printf("Height: %.2f\n", height);
    printf("Bank Balance: Ksh %.2lf\n", bank_balance);
    printf("Phone Number: %s\n", phone_number);

    return 0;
}
