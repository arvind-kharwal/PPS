#include<stdio.h>
int sum();
int main()
{
    int r;
    r = sum();
    printf("\nThe sum of two numbers: %d",r);
    return(0);
}
int sum()
{
    int a,b,s;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    s = a+b;
    return(s);
}