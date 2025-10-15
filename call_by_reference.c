#include <stdio.h>
#include <conio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 10, b = 20;

    printf("Before function call: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After function call: a = %d, b = %d\n", a, b);

    return 0;
}