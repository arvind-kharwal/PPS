#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n,i;
    printf("Enter the size: ");
    scanf("%d",&n); //5  = 5*4
    p = (int*)malloc(n*sizeof(int));
    if(p==NULL)
        printf("\nMemory is not available");
    printf("\nEnter the data: ");
    for(i=0;i<n;i++)
        scanf("%d",p+i);
    printf("\nThe entered data: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    return(0);
}