/*
Write a C program to print the following pattern.
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return(0);
}