// Write a C program to print the following series using loops. 
// 2    4   6   8   10  12  14
#include<stdio.h>
int main()
{
    int i;
    for(i=2;i<=14;i=i+2)
    {
        printf("%d\t",i);
    }
    return(0);
}