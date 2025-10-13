#include <stdio.h>
#include<conio.h>
int main()
{
    const int PI = 3.14;

    int radius = 5;
    float area = PI * radius * radius;

    printf("Radius: %d\n", radius);
    printf("Area of Circle: %.2f\n", area);

    return 0;
}