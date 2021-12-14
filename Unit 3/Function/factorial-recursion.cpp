#include<stdio.h>
unsigned long int fact(int);
int main()
{
    int n;
    unsigned long int r;
    printf("Enter the number: ");
    scanf("%d",&n); // 5
    r = fact(n);
    printf("\nThe factorial is: %lu",r);
    return(0);
}
unsigned long int fact(int m)
{
    unsigned long int f;

    if(m==1)
        return(1);
    else
        f = m*fact(m-1); // 5*4*3*2*1

    return(f);
}