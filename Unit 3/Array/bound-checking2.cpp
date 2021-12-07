#include<stdio.h>
int main()
{
    int i,a[5];
    printf("Enter the elements in array A:");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("The elements in array A:");
    for(i=0;i<10;i++)
        printf("\n%d",a[i]);
    return(0);
}