/*
Write a C program to print the following pattern.
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf("%d",j); 
        }
        printf("\n");
    }
    return(0);
}