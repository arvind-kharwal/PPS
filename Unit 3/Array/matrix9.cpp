// Write a C program to multiply any two 3×3 matrices.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],m[3][3],i,j,k;
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
    printf("Enter the elements in matrix B: ");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\n The matrix B\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            m[i][j] = 0; // 0
            for(k=0;k<3;k++)
            {
                m[i][j] = m[i][j]+a[i][k]*b[k][j]; // 6
            }
        }
    }
    printf("\n The matrix M\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",m[i][j]);
        }
        printf("\n");
    }
}