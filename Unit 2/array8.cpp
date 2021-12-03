#include<stdio.h>
int main()
{
    int a[10],i,neg=0,pos=0;
    printf("Enter the numbers in array a: ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\n The numbers of array a: ");
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);  // 
    for(i=0;i<10;i++)
    {
        if(a[i]<0)
            neg++; 
        else   
            pos++;  
        
    }
    printf("\nThe number of negative elements in array a are: %d",neg);
    printf("\nThe number of positive elements in array a are: %d",pos);
    return(0);
}