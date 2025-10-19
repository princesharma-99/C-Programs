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
    struct Student s[3];
    int i;

    printf("Enter details of 3 students:\n");
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &s[i].roll);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for (i = 0; i < 3; i++) {
        printf("Roll: %d\tName: %s\tMarks: %.2f\n", s[i].roll, s[i].name, s[i].marks);
    }

    return 0;
}