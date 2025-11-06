// A C program to read student results from a binary file and display them.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program reads student results from a binary file and displays them.
*/




#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student information
struct Student {
    char name[50];
    char reg_no[20];
    float total_marks;
};

int main() {
    FILE *file;
    struct Student student;

    // Open the binary file in read mode
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-------------------------------\n");

    // Read records from the file until end of file
    while (fread(&student, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", student.name);
        printf("Registration No: %s\n", student.reg_no);
        printf("Total Marks: %.2f\n", student.total_marks);
        printf("-------------------------------\n");
    }

    // Close the file
    fclose(file);

    return 0;
}