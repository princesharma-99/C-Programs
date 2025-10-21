#include <stdio.h>

int main()
{
    FILE *fp;
    char text[100];

    fp = fopen("example.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);
    fputs(text, fp);

    fclose(fp);
    printf("Text appended successfully!\n");
    return 0;
}