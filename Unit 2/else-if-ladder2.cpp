/*
The marks obtained by a student in 5 different subjects are input through the keyboard.
The student gets a division as per the following rules:
Percentage above or equal to 60 - First division
Percentage between 50 and 59 - Second division
Percentage between 40 and 49 - Third division
Percentage less than 40 - Fail
Write a program to calculate the division obtained by the student. */
#include<stdio.h>
int main()
{
    int P,C,M,E,H,total;
    float per;
    printf("Enter the marks for 5 subjects");
    scanf("%d%d%d%d%d",&P,&C,&M,&E,&H);
    total = P+C+M+E+H;
    printf("\nTotal: %d",total);
    per = total/5;
    printf("\nPercentage: %f",per);
    if(per>=60)
        printf("\nFirst Division");
    else if(per>=50)
        printf("\nSecond Division");
    else if(per>=40)
        printf("\nThird Division");
    else
        printf("\nFail");
return(0);

}