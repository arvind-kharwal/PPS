/* Write a C program to find out the biggest numnber 
of 3×3 matrix and print them in matrix form. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j,big;
    printf("Enter the elements in matrix A: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n The matrix A\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    big = a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]>big)
            big = a[i][j];
        }
    }
    printf("\nThe biggest element in Matix a is: %d",big);
    return(0);
}