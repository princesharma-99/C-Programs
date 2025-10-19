#include <stdio.h>
#include <conio.h>

// Union declaration
union Data {
    int i;
    float f;
    char str[20];
};

int main()
{
    union Data data;

    printf("Memory size occupied by union: %lu bytes\n", sizeof(data));

    data.i = 10;
    printf("\nAfter assigning integer:\n");
    printf("data.i = %d\n", data.i);

    data.f = 220.5;
    printf("\nAfter assigning float:\n");
    printf("data.f = %.2f\n", data.f);

    sprintf(data.str, "C Programming");
    printf("\nAfter assigning string:\n");
    printf("data.str = %s\n", data.str);

    printf("\nAccessing other members after string assignment:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %.2f\n", data.f);

    return 0;
}