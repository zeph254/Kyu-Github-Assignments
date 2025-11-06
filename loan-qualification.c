// a simple loan qualification test program

/* 
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program checks if a person qualifies for a loan based on their age and income.
*/
#include <stdio.h>
#include <math.h>

int main(void) {

  int age, income;
  char name[50];
  printf("Enter your name: ");
  scanf("%49s", name);

  printf("Enter your age: ");
  scanf("%d", &age);

  printf("Enter your income: ");
  scanf("%d", &income);

  if (age >= 21 && income >= 21000) {
    printf("HELLO %s You qualify for a loan\n", name);
  } else {
    printf("Hello %s You do not qualify for a loan\n", name);
  }
  return 0;
}