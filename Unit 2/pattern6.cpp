/*
Write a C program to print the following pattern.
a b c d e
a b c d e
a b c d e
a b c d e
a b c d e
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=97;i<=101;i++)
    {
        for(j=97;j<=101;j++)
        {
            printf("%c",j); // type casting
        }
        printf("\n");
    }
    return(0);
}