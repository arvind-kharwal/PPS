/* Write a C program to find the factorial value of any number entered
through the keyboard.
!5 = 5*4*3*2*1 = 120
 */
#include<stdio.h>
int main()
{
    int n,i,fact=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    printf("\n The factorial is: %d",fact);
    return(0);
}