#include <stdio.h>
#include <conio.h>
int main()
{
    int n, sum=0;

    printf("Enter a value of i:");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum += i;
    }
    
    printf("Sum of first %d natural numbers is: %d", n, sum);

    return 0;
}