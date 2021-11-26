#include<stdio.h>
int main()
{
    int a[10],i,even=0,odd=0;
    printf("Enter the numbers in array a: ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\n The numbers of array a: ");
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);  // 1  4   3   5   11  13  44  66  23  67
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
            even++; // 3
        else   
            odd++;  // 7
        
    }
    printf("\nThe even elements in array a are: %d",even);
    printf("\nThe odd elements in array a are: %d",odd);
    return(0);
}