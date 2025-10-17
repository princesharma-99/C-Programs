#include <stdio.h>
#include <conio.h>

int main()
{
    int a = 10;
    int *ptr; // pointer declaration

    ptr = &a; // store address of 'a' in pointer

    printf("Value of a: %d\n", a);
    printf("Address of a (&a): %p\n", &a);
    printf("Value stored in ptr: %p\n", ptr);
    printf("Value pointed by ptr (*ptr): %d\n", *ptr);

    *ptr = 20; // changing value of 'a' using pointer
    printf("\nAfter changing *ptr = 20:\n");
    printf("New value of a: %d\n", a);

    return 0;
}