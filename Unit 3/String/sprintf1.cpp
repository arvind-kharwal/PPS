#include<stdio.h>
int main()
{
    char s1[50],s2[50];
    printf("Enter the string 1: ");
    gets(s1);
    printf("\nThe string s1: ");
    puts(s1);
    sprintf(s2,"Printing s1 string in sprintf: %s",s1);
    printf("\nThe string s2: ");
    puts(s2);
    return(0);
}