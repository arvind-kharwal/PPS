/*
Write a C program to print the following pattern.

-  -  -  -  *
-  -  -  *  *
-  -  *  *  *
-  *  *  *  *
*  *  *  *  *
                1
            1   2
        1   2   3
    1   2   3   4
1   2   3   4   5

*/

#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=j;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return(0);
}