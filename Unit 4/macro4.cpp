#include<stdio.h>
#define cube(n) n*n*n
int main()
{
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n); //2 
    r = cube(n);
    printf("\nThe cube is %d",r);
    return(0);
}