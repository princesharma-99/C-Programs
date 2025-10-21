#include <stdio.h>

int main()
{
    FILE *fp;
    char data[100];

    // Write to file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter text to write to file: ");
    fgets(data, sizeof(data), stdin);
    fputs(data, fp);
    fclose(fp);

    // Read from file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }
    printf("\nData read from file:\n");
    while (fgets(data, sizeof(data), fp)) {
        printf("%s", data);
    }
    fclose(fp);
    return 0;
}