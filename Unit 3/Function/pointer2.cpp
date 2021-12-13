#include<stdio.h>
int main()
{
    int *p,a =10;
    p = &a;
    printf("\nThe value of a: %d",a);
    printf("\nThe value of a: %d",*p);
    printf("\nThe address of a: %u",&a);
    printf("\nThe address of p: %u",&p);
    printf("\nThe address of a: %u",p);
    printf("\nThe value of a: %d",*(&a));
    return(0);
}