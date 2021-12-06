/* Write a program to obtain transpose of a 3 x 3 matrix.
The transpose of a matrix is obtained by exchanging the
elements of each row with the elements of the
corresponding column. */
#include<stdio.h>
int main()
{
    int a[3][3],i,j,t;
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
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<3;j++)
        {
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
    printf("\n The Transpose of Matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\t%d",a[i][j]);
        }
        printf("\n");
    }
    return(0);
}