// s1= This is a computer
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50];
    char s2[50] = " ";
    char *p;
    char *p1;
    char *p2;
    char *p3;
    printf("Enter the string s1: ");
    gets(s1);
    printf("\nThe string s1: ");
    p = strtok(s1,s2);
    printf("%s",p);
    p1 = strtok(NULL,s2);
    printf("\n%s",p1);
    p2 = strtok(NULL,s2);
    printf("\n%s",p2);
    p3 = strtok(NULL,s2);
    printf("\n%s",p3);
    return(0);
}