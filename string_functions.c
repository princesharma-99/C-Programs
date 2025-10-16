#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50], str2[50], str3[100];

    printf("Enter first string: ");
    gets(str1); // or use fgets(str1, 50, stdin)
    printf("Enter second string: ");
    gets(str2);

    // Length of strings
    printf("\nLength of str1 = %lu", strlen(str1));
    printf("\nLength of str2 = %lu", strlen(str2));

    // Copy string
    strcpy(str3, str1);
    printf("\nAfter copying str1 to str3: %s", str3);

    // Concatenation
    strcat(str1, str2);
    printf("\nAfter concatenation: %s", str1);

    // Comparison
    if (strcmp(str1, str2) == 0)
        printf("\nBoth strings are equal.\n");
    else
        printf("\nStrings are not equal.\n");

    return 0;
}