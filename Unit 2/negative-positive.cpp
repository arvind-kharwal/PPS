// 1. Any integer number is input through the keyboard. 
//Write a C program to find out whether it is
// negative number or positive number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n); //13
    if(n>0)
    {
        printf("The number %d is positive",n);
      
    }
    else
    {
        printf("The number %d is negative",n);
    }
    return(0);
}