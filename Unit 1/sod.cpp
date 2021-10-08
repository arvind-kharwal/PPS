// if a 5 digits number is input through the keyboard,
// write a C program to calculate the sum of its digits.
// n = 12345, 1+2+3+4+5 = 15
// n = 56788
#include<stdio.h>
int main()
{
    long int n, a,sum=0;
    printf("Enter the five digits number: ");
    scanf("%ld",&n); // n= 12345
    a = n%10; //5
    sum = sum+a; // 5
    n = n/10;   //1234
    a = n%10;  // 4
    sum = sum+a;    // 9
    n = n/10;  //123
    a = n%10;   // 3
    sum =sum+a;     // 12
    n = n/10;   // 12
    a = n%10;   // 2
    sum = sum+a;    // 14
    n = n/10;       // 1
    a = n%10;       // 1
    sum = sum+a;    // 15
    n = n/10;       // 0
    printf("\n The sum of digits is %ld",sum);
    return(0);
}