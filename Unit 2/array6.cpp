#include<stdio.h>
int main()
{
    int a[10],i,big;
    printf("Enter the numbers in array a: ");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("\n The numbers of array a: ");
    for(i=0;i<10;i++)
    printf("%d\t",a[i]);
    big = a[0]; //97    // 4    1   5   21  43  9   12  51  97  47
    for(i=0;i<10;i++)
    {
        if(a[i]>big)
        big = a[i];
    }
    printf("\nThe biggest element in array a is: %d",big);
    return(0);
}