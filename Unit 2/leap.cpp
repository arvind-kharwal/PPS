// Write a C program to check whether
// the given year is leap year or not.
//1900, 1100, 1300, 1700 = leap years
// 1900%4 == 0
#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year); //1900 - 2000 - 2020
    if(year%100==0)
    {
        if(year%400==0)
            printf("%d is leap year",year);
        else
            printf("%d is not leap year",year);
    }
    else
    {
        if(year%4==0)
            printf("%d is leap year",year);
        else
            printf("%d is not leap year",year);
    }
}

