// A C program to store the titles of borrowed books in a text file.
/*
  name:         Owuor Zephania Ulare
  reg:          PA106/G/29218/25
  description:  This program stores the titles of borrowed books in a text file.
*/



#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char title[100];

    // Open the file in append mode so existing records are not deleted
    file = fopen("borrowed_books.txt", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Ask the librarian to enter a book title
    printf("Enter the title of the borrowed book: ");
    fgets(title, sizeof(title), stdin); // Read input including spaces

    // Write the book title to the file
    fprintf(file, "%s", title);

    // Close the file
    fclose(file);

    // Display confirmation message
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}