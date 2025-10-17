#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    printf("\nAccessing using array name directly:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d, address = %p\n", i, arr[i], &arr[i]);
    }

    return 0;
}