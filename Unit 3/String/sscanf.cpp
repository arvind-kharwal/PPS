#include<stdio.h>
int main()
{
    char s1[50] = "Hello world";
    char s2[50];
    // printf("Enter the string 1: ");
    // gets(s1);
    printf("\nThe string s1: ");
    puts(s1);
    sscanf(s1,"%s",s2);
    printf("\nThe string s2: %s ",s2);
    return(0);
}