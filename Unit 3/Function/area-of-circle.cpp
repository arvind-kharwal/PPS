#include<stdio.h>
float area(int);
int main()
{
    float r1;
    int rad;
    printf("Enter the radius: ");
    scanf("%d",&rad);
    r1 = area(rad);
    printf("The area of circle is: %f",r1);
    return(0);
}
float area(int r)
{
    float a;
    a = 3.14*r*r;
    return(a);
}