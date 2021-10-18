#include<stdio.h>
int main()
{
    long int n,a,revnum=0; // n = 68739
    printf("Enter the five digits number: ");
    scanf("%ld",&n);
    a = n%10;   // a = 9
    revnum = revnum+a*10000;   // 90000
    n = n/10;       // n = 6873

    a = n%10;   // a = 3
    revnum = revnum+a*1000;   // 93000
    n = n/10;       // n = 687

    a = n%10;   // a = 7
    revnum = revnum+a*100;   // 93700
    n = n/10;       // n = 68

    a = n%10;   // a = 8
    revnum = revnum+a*10;   // 93780
    n = n/10;       // n = 6

    a = n%10;   // a = 6
    revnum = revnum+a;   // 93786
    n = n/10;       // n = 0

    printf("\n The reverse number is %ld",revnum);
    return(0);

}