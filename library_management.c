#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    struct Book b;
    FILE *f = fopen("library.txt", "a");

    printf("Enter Book ID, Title, Author: ");
    scanf("%d %s %s", &b.id, b.title, b.author);

    fprintf(f, "%d %s %s\n", b.id, b.title, b.author);
    fclose(f);
    printf("Book added successfully!\n");
    return 0;
}