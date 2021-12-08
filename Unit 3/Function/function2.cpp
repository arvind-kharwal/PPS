#include<stdio.h>
void sum();
int main()
{
    sum();
    return(0);
}
void sum()
{
    int a,b,s;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    s = a+b;
    printf("\nThe sum of two numbers: %d",s);
}