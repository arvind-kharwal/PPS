#include<stdio.h>
union Student
{
    int r; // 4 bytes
    float h;
};
int main()
{
    union Student S;
    printf("Enter the roll: ");
    scanf("%d",&S.r);
    printf("The roll number: %d\n",S.r);
    printf("Enter the height: ");
    scanf("%f",&S.h);
    printf("The section: %f\n",S.h);
    printf("\nThe size: %d\n",sizeof(S));    
}