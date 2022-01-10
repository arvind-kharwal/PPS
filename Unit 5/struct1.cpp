#include<stdio.h>
struct Student
{
    int r; // 4 bytes
    float f;
    // char sec; // 1 byte
};
int main()
{
    struct Student S;
    // printf("Enter the data: ");
    // scanf("%d%c",&S.r,&S.sec);
    printf("\nThe size: %d\n",sizeof(S));
    // printf("The roll number: %d\n",S.r);
    // printf("The section: %c\n",S.sec);
}