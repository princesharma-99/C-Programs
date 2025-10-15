#include <stdio.h>
#include <conio.h>
int main()
{
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    sum = add(num1, num2);
    printf("Sum = %d\n", sum);
    return 0;
}
// Function definition
int add(int a, int b)
{
    return a + b;
}