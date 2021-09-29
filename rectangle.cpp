/* Write a C program to calculate area of rectangle */
#include<stdio.h>
int main()
{
    float a,l,b;
    printf("\n Enter the length & breadth: ");
    scanf("%f%f",&l,&b);
    a=l*b;
    printf("\n The area of rectangle is %f",a);
    return(0);
}