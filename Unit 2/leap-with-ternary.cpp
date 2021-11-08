#include<stdio.h>
int  main()
{
    int y;
    printf("Enter the year: ");
    scanf("%d",&y);//5
   ((y%100==0)&&(y%400==0)||(y%100!=0)&&(y%4==0))?printf("Leap Year"):printf("Not leap year");
   return(0);
}