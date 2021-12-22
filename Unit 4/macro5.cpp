#include<stdio.h>
#define square(n) n*n
int main()
{
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n); //
    r = n/square(n);
    printf("\nThe square is %d",r);
    return(0);
}