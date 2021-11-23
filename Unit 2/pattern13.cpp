/*
Write a C program to print the following pattern.

* * * * *
* * * *
* * *
* *
*

1 2 3 4 5
1 2 3 4 
1 2 3
1 2
1

5 5 5 5 5 
4 4 4 4
3 3 3 
2 2
1

A B C D E
A B C D 
A B C
A B
A

E E E E E
D D D D
C C C
B B
A

a b c d e
a b c d
a b c
a b
a

e e e e e
d d d d
c c c
b b
a


*/

#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("*"); 
        }
        printf("\n");
    }
    return(0);
}