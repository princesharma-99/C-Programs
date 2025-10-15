#include <stdio.h>
#include <conio.h>

void greet() {
    printf("Hello! Welcome to C Programming.\n");
}

void displaySquare(int n) {
    printf("Square of %d = %d\n", n, n * n);
}

int cube(int n) {
    return n * n * n;
}

int getNumber() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}

int main() {
    greet();

    int number = getNumber();

    displaySquare(number);

    int result = cube(number);
    printf("Cube of %d = %d\n", number, result);

    return 0;
}