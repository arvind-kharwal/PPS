/*  if a 5 digits number is input through the keyboard,
write a C program to reverse the number. */
#include<stdio.h>
int main()
{
    long int n,a,revnum =0;
    printf("Enter the five digits number: ");
    scanf("%ld",&n); //45732
    a = n%10;       // a = 2
    revnum = revnum*10+a; // revnum = 2
    n = n/10;       // 4573

    a = n%10;       // a = 3
    revnum = revnum*10+a;   // revnum = 23
    n = n/10;       // n = 457

    a = n%10;       // a = 7
    revnum = revnum*10+a;   // revnum = 237
    n = n/10;   // 45

    a = n%10;   // a = 5
    revnum = revnum*10+a;   // revnum = 2375
    n = n/10;       // n = 4

    a = n%10;       // a = 4
    revnum = revnum*10+a;   // revnum = 23754
    n = n/10;       // n = 0
    
    printf("\n The reverse number is: %ld",revnum);
    return(0);

} 