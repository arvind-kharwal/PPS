/*
Write a C program to print the following pattern.

A
A B
A B C
A B C D
A B C D E

A
B B
C C C
D D D D
E E E E E

a
a b
a b c
a b c d
a b c d e

a 
b b 
c c c 
d d d d
e e e e e

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
    for(i=65;i<=69;i++)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c",j); 
        }
        printf("\n");
    }
    return(0);
}