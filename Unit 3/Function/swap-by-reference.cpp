#include<stdio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b); // a= 10 add = 100, b =20, add 200
    printf("\nThe numbers before swapping: %d\t%d",a,b);
    swap(&a,&b);
    return(0);
}
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\nThe numbers after swapping: %d\t%d",*x,*y); 
}