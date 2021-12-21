#include<stdio.h>
#include<string.h>
int main()
{
    char s1[50],s2[50];
    char *p;
    printf("Enter the string s1: ");
    gets(s1);
    printf("\nThe string s1: ");
    puts(s1);
    printf("Enter the sub string: ");
    gets(s2);
    printf("\nThe string s2: ");
    puts(s2);   
    p = strstr(s1,s2);
    if(p)
    {
        printf("String found\n");
        printf("The string %s found in %s as %s",s2,s1,p);
    }
    else
        printf("\nThe string does not found");
    return(0);
}