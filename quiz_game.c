/* Quiz Game (console) 
   - Simple multiple-choice quiz with scoring.
*/
#include <stdio.h>
#include <string.h>

typedef struct { char q[256]; char opt[4][80]; int ans; } Q;

int main()
{
    Q questions[] = {
        {"What is the capital of India?","New Delhi","Mumbai","Kolkata","Chennai",1},
        {"2 + 2 * 2 = ?","6","8","4","2",1},
        {"C is a ___ language?","High-level","Low-level","Middle-level","Markup",3}
    };
    int n = sizeof(questions)/sizeof(questions[0]);
    int score = 0;
    int choice;
    for(int i=0;i<n;i++)
    {
        printf("\nQ%d: %s\n", i+1, questions[i].q);
        for(int j=0;j<4;j++)
        printf("%d) %s\n", j+1, questions[i].opt[j]);
        printf("Your answer (1-4): ");
        if(scanf("%d",&choice)!=1)
        {
            printf("Invalid.\n"); break;
        }
        if(choice == questions[i].ans)
        {
            score+=10; printf("Correct! +10\n");
        }
        else
        printf("Wrong. Correct answer: %d\n", questions[i].ans);
    }
    printf("\nFinal Score: %d/%d\n", score, n*10);
    return 0;
}