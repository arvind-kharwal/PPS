/*  
C program to reverse the 5 digit number using loops.  
*/
#include<stdio.h>
int main()
{
    long int n,a,revnum=0;
    printf("Enter the five digits number: ");
    scanf("%ld",&n); // 32456
    while(n>0)
    {
        a = n%10;
        revnum = revnum*10+a;
        n = n/10;
    }
    printf("\nThe reverse number: %ld",revnum);
    return(0);
}
