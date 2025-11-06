// This code implements a simple number guessing game in C.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program implements a simple number guessing game where the user has to guess a randomly generated number between 1 and 20.
*/






#include <stdio.h>
#include <stdlib.h>  // for rand() and srand()
#include <time.h>    // for time()

int main() {
    int secretNumber, guess, attempts = 0;

    // Initialize random seed
    srand(time(0));

    // Generate random number between 1 and 20
    secretNumber = (rand() % 20) + 1;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 20. Can you guess it?\n");

    // Loop until the player guesses correctly
    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;  // count each attempt

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations! You guessed it in %d attempt(s).\n", attempts);
        }

    } while (guess != secretNumber);  // repeat until correct

    return 0;
}