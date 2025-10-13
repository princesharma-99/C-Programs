#include <stdio.h>
#include<conio.h>
int main()
{
    int age;
    float marks;
    char name[30];

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter marks: ");
    scanf("%f", &marks);

    printf("\nOutput\n");
    printf("Name: %s\n", name);
    printf("Age: %d years\n", age);
    printf("Marks: %.2f\n", marks);

    return 0;
}