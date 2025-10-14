#include <stdio.h>
#include <conio.h>
int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    printf("\nRight Triangle Pattern\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nInverted Triangle Pattern\n");
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\nPyramid Pattern\n");
    for (int i = 1; i <= n; i++) {
        for (int space = 1; space <= n - i; space++)
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}