#include <stdio.h>
#include <conio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    printf("\nCharacters of string using pointer:\n");
    while (*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }

    printf("\n");

    return 0;
}