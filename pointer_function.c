#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBefore swapping: a = %d, b = %d", a, b);
    swap(&a, &b); // pass addresses of a and b
    printf("\nAfter swapping:  a = %d, b = %d\n", a, b);

    return 0;
}