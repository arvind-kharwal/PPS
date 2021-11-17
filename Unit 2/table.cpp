/* 1. Write a C program to print the multiplication table of 
the number entered By the user.
The table should get displayed in the following form. 

5 * 1 = 5 
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/

#include<stdio.h>
int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d",&n); //5
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",n,i,n*i);
    }
    return(0);
}