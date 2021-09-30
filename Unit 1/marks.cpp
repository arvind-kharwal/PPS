// If the marks obtained by a student in five different subjects are input through the keyboard, find out the aggregate marks and percentage marks obtained by the student. Assume that the maximum marks that can be obtained by a student in each subject is 100.
#include<stdio.h>
int main()
{
    int P,C,M,E,B,Total;
    float per;
    printf("Enter the marks for 5 subjects: ");
    scanf("%d%d%d%d%d",&P,&C,&M,&E,&B);
    Total = P+C+M+E+B;
    per = Total/5;
    printf("The total marks: %d",Total);
    printf("\nThe Percentage of marks: %f",per);
    return(0);
}

