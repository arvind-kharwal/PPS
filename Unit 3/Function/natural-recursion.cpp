// Write a C program to calculate the Sum of First n Natural Numbers
// Using Recursion.
#include<stdio.h>
int natural(int);
int main()
{
    int n,r;
    printf("Enter the terms : ");
    scanf("%d",&n); // 6
    r = natural(n);
    printf("\nThe sum of first %d natural numbers : %d",n,r);
    return(0);
}

int natural(int n1)
{
    int s;
    if(n1==1)
        return(1);
    else
        s = n1+natural(n1-1);
    return(s);
}