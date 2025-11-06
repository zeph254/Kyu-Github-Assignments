// cheking exam eligibility

/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program checks the eligibilty to take an exam.
*/



#include <stdio.h>

int main() {
    float attendance, avgMarks;

    // Input attendance and marks
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &avgMarks);

    // Check eligibility
    if (attendance >= 75 && avgMarks >= 40) {
        printf("Eligible for final exams.\n");
    } else {
        printf("Not eligible for final exams.\n");
    }

    return 0;
}