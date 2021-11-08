#include<stdio.h>
int  main()
{
    int n,r;
    printf("Enter the number: ");
    scanf("%d",&n);//5
    r = n<10?100:300;
    printf("The value of r is: %d",r);
    return(0);
}