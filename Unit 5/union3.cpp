#include<stdio.h>
union Student
{
    int r; // 4 bytes
    char h[10];
};
int main()
{
    union Student S;
    printf("Enter the roll: ");
    scanf("%d",&S.r);
    printf("The roll number: %d\n",S.r);
    printf("Enter the height: ");
    scanf("%s",&S.h);
    printf("The section: %s\n",S.h);
    printf("\nThe size: %d\n",sizeof(S));    
}