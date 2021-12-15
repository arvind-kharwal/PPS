#include<stdio.h>
int sum(int[],int n);
int main()
{
    int a[10],i,r,n;
    printf("Enter the elements in array a:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("\nThe elements in array a:\n");
    for(i=0;i<10;i++)
        printf("%d\t",a[i]);
    printf("\nEnter the number: ");
    scanf("%d",&n);
    r = sum(a,n);
    printf("\nThe sum of elements: %d",r);
    return(0);
}
int sum(int a[],int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
        s = s+a[i];
    return(s);
}