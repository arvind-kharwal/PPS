#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i,n;
    printf("Enter the size: ");
    scanf("%d",&n);
    p = (int*)calloc(n,sizeof(int)); // 20 bytes
    if(p==NULL)
        printf("No Memory Available");
    for(i=0;i<n;i++)
        printf("%d ",*(p+i));

}