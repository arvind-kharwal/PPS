#include<stdio.h>
int main()
{
    int a,b; 
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b); // 10 20
    printf("\nThe numbers before swapping are: %d\t%d",a,b);
    a = a+b;    // 30
    b =a-b;     // 10
    a = a-b;    // 20
    printf("\nThe numbers after swapping are: %d\t%d",a,b);

}