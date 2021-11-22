/*
Write a C program to print the following pattern.
A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=69;j++)
        {
            printf("%c",j); // type casting
        }
        printf("\n");
    }
    return(0);
}