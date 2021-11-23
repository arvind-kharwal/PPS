/*
Write a C program to print the following pattern.
a a a a a
b b b b b
c c c c c
d d d d d
e e e e e
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=97;i<=101;i++)
    {
        for(j=97;j<=101;j++)
        {
            printf("%c",i); // type casting
        }
        printf("\n");
    }
    return(0);
}