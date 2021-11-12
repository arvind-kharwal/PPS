// Write a C program to print the following series using loops. 
// 5    10      15      20      25
#include<stdio.h>
int main()
{
    int i;
    for(i=5;i<=25;i=i+5)
    {
        printf("%d\t",i);
    }
    return(0);
}