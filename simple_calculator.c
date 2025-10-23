#include <stdio.h>
#include <conio.h>

float add(float a, float b) { return a + b; }
float sub(float a, float b) { return a - b; }
float mul(float a, float b) { return a * b; }
float div(float a, float b) { return b != 0 ? a / b : 0; }

int main() {
    float a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operator (+ - * /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Result: %.2f", add(a, b)); break;
        case '-': printf("Result: %.2f", sub(a, b)); break;
        case '*': printf("Result: %.2f", mul(a, b)); break;
        case '/': printf("Result: %.2f", div(a, b)); break;
        default: printf("Invalid operator!");
    }
    return 0;
}