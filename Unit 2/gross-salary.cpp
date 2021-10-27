/* 1. If the employee's basic salary is input through the keyboard. 
If his basic salary is less than Rs. 1500,
then HRA = 10% of basic salary and DA = 90% of basic salary. 
If his salary is either equal to or above Rs. 1500, 
then HRA = Rs. 500 and DA = 98% of basic salary. 
write a C program to find his gross salary. */

#include<stdio.h>
int main()
{
    int bs;
    float da,hra,gs;
    printf("Enter the basic salary");
    scanf("%d",&bs);
    if(bs<1500)
    {
        hra = 0.10*bs;
        da = 0.90*bs;
    }
    else
    {
        hra = 500;
        da = 0.98*bs;
    }
    gs = bs+hra+da;
    printf("The gross salary is: %f",gs);
    return(0);
}