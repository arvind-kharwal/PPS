// Ramesh’s basic salary is input through the keyboard. His dearness allowance is 40% of basic salary, and house rent allowance is 20% of basic salary. Write a program to calculate his gross salary.
// gross salary = basic salary + DA + HRA; 
#include<stdio.h>
int main()
{
    int bs;
    float gs,da,hra;
    printf("\n Enter the basic salary: ");
    scanf("%d",&bs);
    da = 0.40*bs;
    hra = 0.20*bs;
    gs = bs+da+hra;
    printf("\nThe gross salary: %f ",gs);
    return(0);
}
