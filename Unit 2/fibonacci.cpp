/* Write a C program to generate the Fibonacci series.
       
0   1   1   2   3
            a   b   c

*/
#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    a = 0;
    b = 1;
    printf("Enter the terms for fibonacci series: ");
    scanf("%d",&n); //5 
    printf("\n The fibonacci series: ");
    printf("%d\t%d",a,b);
    for(i=0;i<n-2;i++)
    {
        c = a+b;
        printf("\t%d",c);
        a = b;  // 1
        b = c;  // 1
    }
    return(0);
}