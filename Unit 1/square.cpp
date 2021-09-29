/* Write a C program to calculate area of square */
#include<stdio.h>
int main()
{
    float a,b;
    printf("\n Enter the side: ");
    scanf("%f",&a);
    b = a*a;
    printf("\n The area of square is %f",b);
    return(0);
}