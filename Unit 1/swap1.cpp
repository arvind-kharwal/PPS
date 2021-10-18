#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe numbers before swapping are: %d\t%d",a,b);
    c = a;
    a = b;
    b = c;
    printf("\nThe numbers after swapping are: %d\t%d",a,b);

}