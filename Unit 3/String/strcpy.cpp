// strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter the first string: ");
    gets(s1);
    printf("\nThe String S1: ");
    puts(s1);
    strcpy(s2,s1);
    printf("\nThe String S2: ");
    puts(s2);
    return(0);
}