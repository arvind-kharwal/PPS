#include<stdio.h>
int main()
{
    int a[5],i;
    printf("Enter the roll numbers: ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nThe roll numbers are: ");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    return(0);
}