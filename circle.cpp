/* Write a C program to calculate area of circle */
#include<stdio.h>
int main()
{
    float r;
    float a;
    printf("Enter the radius:\n");
    scanf("%f",&r);
    a = 3.14*r*r;
    printf("The area of circle is: %f\n",a);
    return(0);
}