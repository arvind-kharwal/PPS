// Write a c program to swap the two values without using third variable.

#include<stdio.h>
int main()
{   
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n The numbers before swapping are:%d\t%d",a,b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("\n The numbers after swapping are:%d\t%d",a,b);
    return(0);
}