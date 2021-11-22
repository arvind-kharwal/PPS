/* 
1. C program to calculate sum of digits of a 5 digit number using loops.  
*/
#include<stdio.h>
int main()
{
    long int n,a,s=0;
    printf("Enter the five digits number: ");
    scanf("%ld",&n); // 32456
    while(n>0)
    {
        a = n%10;   // 3
        s = s+a;    //  20
        n = n/10;   // 0
    }
    printf("\nThe sum of five digits number: %ld",s);
    return(0);
}