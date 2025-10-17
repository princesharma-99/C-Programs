#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 5;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("Value of a: %d\n", a);
    printf("Address of a (&a): %p\n", &a);
    printf("Value of ptr1: %p\n", ptr1);
    printf("Value pointed by ptr1 (*ptr1): %d\n", *ptr1);
    printf("Value of ptr2: %p\n", ptr2);
    printf("Value pointed by ptr2 (*ptr2): %p\n", *ptr2);
    printf("Value pointed by *ptr2 (**ptr2): %d\n", **ptr2);

    return 0;
}