/* if a five digits number is input through 
 the keyboard, write a c program to calculate
 the sum of first and last digit. */
// n = 57686  // 99999
// a = n%10; = 6
// l = n/10000; = 5
#include<stdio.h>
int main()
{
    long int n,a,l,sum;
    printf("Enter the five digits number: ");
    scanf("%ld",&n);
    printf("\nThe five digits number: %ld",n);
    a = n%10;
    l = n/10000;
    sum = a+l;
    printf("\n The sum of first and last digit is: %ld",sum);
    return(0);
}