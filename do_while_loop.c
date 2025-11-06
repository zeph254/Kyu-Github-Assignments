// Password validation program in C

/*
    name:         Owuor Zephania Ulare
    reg:          PA106/G/29218/25
    description:  This program prompts the user to enter a password and validates it against a predefined password ("1234"). 
                  The user is repeatedly prompted until the correct password is entered.
*/





#include <stdio.h>
#include <string.h>

int main() {
    char password[20];  // store user input

    // Do-while loop ensures the user is prompted at least once
    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, "1234") != 0) {
            printf("Incorrect password. Try again.\n");
        }

    } while (strcmp(password, "1234") != 0);  // repeat until correct

    printf("Access Granted\n");

    return 0;
}