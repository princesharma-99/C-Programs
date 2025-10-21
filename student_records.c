#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s;
    FILE *fp;

    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("File opening error!\n");
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        printf("\nEnter Roll No: ");
        scanf("%d", &s.roll);
        getchar();
        printf("Enter Name: ");
        fgets(s.name, sizeof(s.name), stdin);
        printf("Enter Marks: ");
        scanf("%f", &s.marks);
        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fp);
    printf("\nStudent records saved to file successfully!\n");
    return 0;
}