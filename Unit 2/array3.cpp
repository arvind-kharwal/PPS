#include<stdio.h>
int main()
{
    int a[5],b[5],i;
    printf("Enter the numbers in array a: ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\n The numbers of array a: ");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    for(i=0;i<5;i++)
    {
        b[i] = a[4-i];
    }
    printf("\n The numbers of array b: ");
    for(i=0;i<5;i++)
    printf("%d\t",b[i]);
    return(0);
}