//Managing ATM transactions in C using while loop
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program simulates an ATM transaction system where a user withdraws money, checks balance, and exits the system.
*/





#include<stdio.h>

int main(){
    float balance, withdraw;

    // Ask user for initial balance
    printf("Enter your account balance: ");
    scanf("%f", &balance);

    // Loop while balance is positive
    while (balance > 0) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        balance = balance - withdraw;  // update balance

        if (balance > 0) {
            printf("Remaining balance: %.2f\n", balance);
        } else {
            printf("Balance is zero or negative. Your account is empty.\n");
        }
    }

    return 0;
}