#include <stdio.h>

#define PI 3.14159
#define AREA(r) (PI * r * r)

int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of Circle: %.2f\n", AREA(radius));
    return 0;
}