/*
Write a C program to print the following pattern.
A A A A A
B B B B B
C C C C C
D D D D D
E E E E E
*/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=69;j++)
        {
            printf("%c",i); // type casting
        }
        printf("\n");
    }
    return(0);
}