#include<stdio.h>
void swap(int,int);
int main()
{
    int a,b;
    printf("Enter the two numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe two numbers before swapping: %d\t%d",a,b);
    swap(a,b);
    return(0);
}
void swap(int r1,int r2)
{
    int t;
    t = r1;
    r1 = r2;
    r2 = t;
    printf("\nThe two numbers after swapping: %d\t%d",r1,r2);
}