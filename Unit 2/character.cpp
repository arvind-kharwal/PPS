/* 2. Write a C program to print all the ASCII values
and their equivalent Characters using a while loop.
The ASCII values vary from 0 to 255. 
*/
#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=255;i++)
    {
        printf("%c = %d\t",i,i);
    }
    return(0);
}