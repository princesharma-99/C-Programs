#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter a numbers:");
    scanf("%d",&a);
    
    if(a>0)
    {
        printf("a is positive");
    }
    else if(a<0)
    {
        printf("a is negative");
    }
    else
    {
        printf("a is zero");
    }
    
    return 0;
}