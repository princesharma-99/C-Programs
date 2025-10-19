#include <stdio.h>
#include <conio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s) {
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1;

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    display(s1);

    return 0;
}