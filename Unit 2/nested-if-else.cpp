// Nested if-else

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n<5)
    {
        if(n==2)
            printf("Hello");
        else
            printf("World");
    }
    else
    {
        if(n==10)
        {
            printf("ECE");
        }
        else
        {
            printf("EEE");
        }
    }
    return(0);
}