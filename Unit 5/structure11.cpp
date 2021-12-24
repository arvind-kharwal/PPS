#include<stdio.h>
int main()
{
    struct Employee
    {
        int empid;
        float sal;
        char name[50];
    }E1,E2;
    printf("Enter the data for employee E1: ");
    scanf("%d%f%s",&E1.empid,&E1.sal,E1.name);
    printf("\nThe data for employee E1\n");
    printf("The Empid = %d\nSalary = %f\nName of Employee = %s",E1.empid,E1.sal,E1.name);
    E2.sal = E1.sal;
    printf("\nEnter the emp id & name for employee E2: ");
    scanf("%d%s",&E2.empid,E2.name);
    printf("\nThe data for employee E2\n");
    printf("The Empid = %d\nSalary = %f\nName of Employee = %s",E2.empid,E2.sal,E2.name);
    return(0);
}