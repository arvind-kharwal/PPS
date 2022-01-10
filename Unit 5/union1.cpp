#include<stdio.h>
union Student
{
    int r;
    char sec;
};
int main()
{
    union Student S;
    printf("\nThe size: %d\n",sizeof(S));
    S.r = 10;
    S.sec = 'A';
    printf("The roll number: %d\n",S.r);
    printf("ThHeight: %c\n",S.sec);
}