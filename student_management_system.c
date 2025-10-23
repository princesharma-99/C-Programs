#include <stdio.h>
#include <string.h>

struct Student { int roll; char name[50]; float marks; };

void addStudent(){
    struct Student s;
    FILE *fp = fopen("students_db.txt","a");
    if(!fp){ perror("fopen"); return; }
    printf("Enter roll, name (no spaces), marks: ");
    if(scanf("%d %49s %f",&s.roll,s.name,&s.marks)==3){
        fprintf(fp,"%d %s %.2f\n", s.roll, s.name, s.marks);
        printf("Saved.\n");
    } else printf("Invalid input.\n");
    fclose(fp);
}

void listStudents(){
    struct Student s;
    FILE *fp = fopen("students_db.txt","r");
    if(!fp){ printf("No records found.\n"); return; }
    printf("\nRoll\tName\tMarks\n");
    while(fscanf(fp,"%d %49s %f",&s.roll,s.name,&s.marks)==3)
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.marks);
    fclose(fp);
}

int main(){
    int choice;
    while(1){
        printf("\n1.Add  2.List  3.Exit\nChoice: ");
        if(scanf("%d",&choice)!=1) break;
        if(choice==1) addStudent();
        else if(choice==2) listStudents();
        else break;
    }
    return 0;
}