// 1. Any integer number is input through the keyboard. 
//Write a C program to find out whether it is
// an odd number or even number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); //13
    if(n%2==0)
    {
        printf("The number %d is even",n);
    }
    else
    {
        printf("The number %d is odd",n);
    }
    return(0);
}