#include<stdio.h>
#define pi 3.14
int  main()
{
    float a;
    int r;
    printf("Enter the radius: ");
    scanf("%d",&r);
    a = pi*r*r;
    printf("\nThe area of circle is: %f",a);
    return(0);
}