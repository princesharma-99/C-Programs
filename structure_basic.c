#include <stdio.h>
#include <conio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}