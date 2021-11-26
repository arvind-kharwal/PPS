// If the marks obtained by a student in five different subjects are input
// through the keyboard, find out the aggregate marks and percentage 
// obtained by the student.
// Assume that the maximum marks that can be obtained by a 
//student in each subject is 100.

#include<stdio.h>
int main()
{
    int marks[5],i,agg=0;
    float per;
    printf("Enter the marks: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("\n The marks entered are: ");
    for(i=0;i<5;i++)
    {
        printf("%d\t",marks[i]);
    }
    for(i = 0;i<5;i++)
    {
        agg = agg+marks[i];
    }
    per = agg/5;
    printf("\nThe aggregate Marks: %d",agg);
    printf("\nThe percentage is %f",per);
    return(0);
}