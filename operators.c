#include <stdio.h>
#include<conio.h>
int main() {
    int a = 10, b = 5;

    // Arithmetic Operators
    printf("Arithmetic Operators:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n\n", a % b);

    // Relational Operators
    printf("Relational Operators:\n");
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n\n", a != b);

    // Logical Operators
    printf("Logical Operators:\n");
    printf("(a > b) && (b > 0): %d\n", (a > b) && (b > 0));
    printf("(a < b) || (b > 0): %d\n", (a < b) || (b > 0));
    printf("!(a == b): %d\n\n", !(a == b));

    // Assignment Operators
    printf("Assignment Operators:\n");
    int x = a;
    x += b;
    printf("x += b: %d\n", x);
    x -= b;
    printf("x -= b: %d\n", x);
    x *= b;
    printf("x *= b: %d\n", x);
    x /= b;
    printf("x /= b: %d\n\n", x);

    // Increment and Decrement
    printf("Increment and Decrement:\n");
    printf("a before increment: %d\n", a);
    a++;
    printf("a after increment: %d\n", a);
    a--;
    printf("a after decrement: %d\n", a);

    return 0;
}