// Array of structures
struct Employee
{
        int empid;
        float sal;
        char name[50];
};
#include<stdio.h>
int main()
{
    int i;
    struct Employee E[3];
    printf("Enter the data: \n");
    for(i=0;i<3;i++)
    {
        scanf("%d%f%s",&E[i].empid,&E[i].sal,&E[i].name);
    }
    printf("\nThe data for employees: \n");
    for(i=0;i<3;i++)
    {
        printf("\nThe Emp id: %d\nSalary: %f\nName: %s",E[i].empid,E[i].sal,E[i].name);
    }
    return(0);
}