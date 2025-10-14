#include <stdio.h>
#include <conio.h>
int main()
{
    char operator;
    double a, b;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;

        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;

        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;

        case '/':
            if (b != 0)
                printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error! Zero is not Divisible.\n");
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}