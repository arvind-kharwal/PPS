// The length & breadth of a rectangle  are input through the keyboard. Write a program to calculate the perimeter of the rectangle.

#include<stdio.h>
int main()
{
    float l,b,p;
    printf("Enter the length & breadth:");
    scanf("%f%f",&l,&b);
    p = 2*(l+b);
    printf("The perimeter is %f",p);
    return(0);
}