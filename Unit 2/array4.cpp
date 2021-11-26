#include<stdio.h>
int main()
{
    int a[5],b[5],c[10],i;
    printf("Enter the numbers in array a: ");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);
    printf("\n The numbers of array a: ");
    for(i=0;i<5;i++)
    printf("%d\t",a[i]);
    printf("\nEnter the numbers in array b: ");
    for(i=0;i<5;i++)
    scanf("%d",&b[i]);
    printf("\n The numbers of array b: ");
    for(i=0;i<5;i++)
    printf("%d\t",b[i]);
    for(i=0;i<5;i++)
    {
        c[i] = a[i];
        c[i+5] = b[i];
    }
    printf("\n The elements of array c: ");
    for(i=0;i<10;i++)
    printf("%d\t",c[i]);
    return(0);
}