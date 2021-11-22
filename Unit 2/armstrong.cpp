/* Write a C program to print out all 
Armstrong numbers between 1 and 500. 
If sum of cubes of each digit of the number is equal to the
Number itself, then the number is called an Armstrong number.
i = 1
i = 153 => 1^3+5^3+3^3 = 1+ 125 + 27 = 153 
*/
#include<stdio.h>
int main()
{
    int a,b,c,i;
    for(i=1;i<=500;i++)
    {
        a = i%10;   // 3    1
        b = i%100;  // 53  1
        b = b/10;   // 5    0
        c = i/100;  // 1    0
        if((a*a*a)+(b*b*b)+(c*c*c)==i)
        printf("%d\n",i);
        
    }
    return(0);
}