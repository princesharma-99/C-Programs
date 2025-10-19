#include <stdio.h>
#include <conio.h>

struct Address {
    char city[50];
    char state[50];
    int pincode;
};

struct Student {
    int roll;
    char name[50];
    struct Address addr;
};

int main()
{
    struct Student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter name: ");
    scanf("%s", s1.name);
    printf("Enter city: ");
    scanf("%s", s1.addr.city);
    printf("Enter state: ");
    scanf("%s", s1.addr.state);
    printf("Enter pincode: ");
    scanf("%d", &s1.addr.pincode);

    printf("\n--- Student Details ---\n");
    printf("Roll: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("City: %s\n", s1.addr.city);
    printf("State: %s\n", s1.addr.state);
    printf("Pincode: %d\n", s1.addr.pincode);

    return 0;
}