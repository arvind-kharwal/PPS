/* 2. The current year and the year in which the employee joined the 
organization are entered through the keyboard. If the number of years 
for which the employee has served the organization is greater than 3 
then a bonus of Rs. 2500/- is given to the employee. If the years of
service are less than 3, then the program should do nothing.
*/
#include<stdio.h>
int main()
{
    int cy,jy,yos,bonus;
    printf("Enter the joining year:");
    scanf("%d",&jy);
    printf("Enter the current year:");
    scanf("%d",&cy);
    yos = cy-jy;
    if(yos>=3)
    {
        bonus = 2500;
        printf("\nThe bonus is %d",bonus);
    }
    return(0);
}