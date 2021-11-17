/* Write a C program to check whether the given number
is prime number or not.
Prime Numbers: 2 3 5 7 11 13 17
*/
#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number: ");
    scanf("%d",&n); //4
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
         count++; // 3
    }
    if(count==2)
        printf("The Number %d is Prime",n);
    else
        printf("The Number %d is not Prime",n);
    return(0);
}