#include<stdio.h>
unsigned long int facto(int);
int main()
{
    unsigned long int r;
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    r = facto(n);
    printf("\nThe factorial of %d is: %lu",n,r);
    return(0);
}
unsigned long int facto(int n1)
{
    unsigned long int f = 1;
    int i;
    for(i=1;i<=n1;i++)
    {
        f = f*i;
    }
    return(f);
}