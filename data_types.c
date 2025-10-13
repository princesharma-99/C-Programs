#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 10;
    float b = 20.5;
    char c = 'A';
    double d = 30.123456;
    
    printf("Integer: %d\n", a);
    printf("Float: %.2f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %.6lf\n", d);
    
    printf("\nData Type Sizes\n");
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of float: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of double: %zu bytes\n", sizeof(d));

    return 0;
}