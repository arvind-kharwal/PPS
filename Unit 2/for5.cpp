// Write a C program to print the following series using loops. 
// 1  3  5 	7 	9 	11  13  15
#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=15;i=i+2)
    {
        printf("%d\t",i);
    }
    return(0);
}