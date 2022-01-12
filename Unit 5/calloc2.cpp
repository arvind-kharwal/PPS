#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter the size: ");
    scanf("%d",&n); // 5
    p = (int*)calloc(n,sizeof(int)); // 20 bytes
    if(p==NULL)
        printf("No Memory Available");
    printf("\nEnter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",(p+i));
    printf("\nEntered elements: ");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));
    return(0);
}