#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("\nMultiplication Table of %d\n", n);
    printf("---------------------------\n");

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
