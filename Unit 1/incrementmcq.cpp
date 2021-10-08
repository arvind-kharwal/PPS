#include<stdio.h>
int main()
{
    int a,b;
    a = 3;
    b = a++ + ++a;
    printf("\nThe value of a:%d",a);
    printf("\nThe value of b:%d",b);
    return(0);
}