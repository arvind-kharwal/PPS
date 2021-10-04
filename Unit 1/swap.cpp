// Write a c program to swap the two values with the help of the third variable.

#include<stdio.h>
int main()
{   
    int a,b,c;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\n The numbers before swapping are:%d\t%d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\n The numbers after swapping are:%d\t%d",a,b);
    return(0);
}